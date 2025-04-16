# C Frontend: Lexer, Parser, AST

CC = gcc

OBJ = lexer.o parser.o ast.o

# executable
TARGET = compiler

# build project
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(CFLAGS)

# compile lexer.o
lexer.o: lexer.c ast.h
	$(CC) -c lexer.c $(CFLAGS)

# Compile parser.o
parser.o: parser.c ast.h
	$(CC) -c parser.c $(CFLAGS)

# Compile ast.o
ast.o: ast.c ast.h
	$(CC) -c ast.c $(CFLAGS)

# Clean the build
clean:
	rm -f $(OBJ) $(TARGET)
