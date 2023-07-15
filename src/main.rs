use tree_sitter::{Language, Node, Parser, Tree, TreeCursor};

extern "C" {
    fn tree_sitter_jtml() -> Language;
}

use std::fs;
use std::io::Write;
use std::path::Path;
use structopt::StructOpt;

#[derive(StructOpt)]
struct Cli {
    #[structopt(required = true, min_values = 1)]
    filenames: Vec<String>,
}

fn main() -> Result<(), anyhow::Error> {
    let args = Cli::from_args();
    let filenames = args.filenames;
    for filename in filenames {
        // read text
        let path = Path::new(&filename);
        if path.is_dir() {
            eprintln!("{} is a directory", filename);
            continue;
        }
        let file_text = match fs::read_to_string(&filename) {
            Ok(text) => text,
            Err(_) => {
                eprintln!("Error reading from {}", filename);
                continue;
            }
        };
        // compile
        let compiled = match compile(file_text) {
            Ok(compiled) => compiled,
            Err(e) => {
                eprintln!("Error compiling '{}' ({})", filename, e);
                continue;
            }
        };
        // write to file
        let mut file = match fs::File::create(Path::new(&filename).with_extension("html")) {
            Ok(file) => file,
            Err(_) => {
                eprintln!("Error creating file {}", filename);
                continue;
            }
        };
        file.write(compiled.as_bytes())?;
    }
    Ok(())
}

enum CompileError {
    CannotParse,
    UnexpectedToken(String),
}

impl std::fmt::Display for CompileError {
    fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
        match self {
            CompileError::UnexpectedToken(s) => write!(f, "Unexpected token: {}", s),
            CompileError::CannotParse => write!(f, "Cannot parse"),
        }
    }
}

fn compile(text: String) -> Result<String, CompileError> {
    // parser init
    let mut parser = Parser::new();
    let language = unsafe { tree_sitter_jtml() };
    parser.set_language(language).unwrap();

    let tree = match parser.parse(&text, None) {
        Some(tree) => tree,
        None => return Err(CompileError::CannotParse),
    };
    let mut cursor = tree.walk();
    print_tree(tree.root_node(), text.as_bytes());
    Ok("hoge".to_string())
}

enum NodeKind {
    Element,
    Text,
    Comment,
    Document,
    Id,
    Value,
}

fn to_html(text: String, cursor: &mut TreeCursor) -> String {
    println!("{}",cursor.goto_next_sibling());
    while cursor.goto_next_sibling() {
        let node = cursor.node();
        println!("{}: {}", node.kind(), node.utf8_text(&text.as_bytes()).unwrap());
    }
    "hoge".to_ascii_lowercase()
}

fn print_tree(root: Node, source: &[u8]) {
    let mut cursor = root.walk();
    let mut indent = 0;
    // loopする
    loop {
        // indentの数だけ空白出力
        for _ in 0..indent {
            print!("  ");
        }
        // カーソルにあるノードを取得
        let node = cursor.node();
        // ノード出力
        println!(
            "{} {}..{}",
            node.kind(),
            node.start_byte(),
            node.end_byte()
        );
        //カーソルを子要素に移動させる
        if cursor.goto_first_child() {
            // 成功した場合はindentを増やして次のループへ
            indent += 1;
            continue;
        }
        // カーソルの子要素がなかった場合↓
        loop {
            // カーソルの次の要素があったら次の親ループへ
            if cursor.goto_next_sibling() {
                break;
            }
            // カーソルがrootに戻ったら終了
            if !cursor.goto_parent() {
                return;
            }
            // indentを-1して次のループへ
            indent -= 1;
        }
    }
}