# C Frontend: Lexer, Parser, AST

all: compiler

compiler : lexer.o parser.o ast.o
	$(CC) -o compiler lexer.o parser.o ast.o -Wall

clean:
	rm -f *.o compiler