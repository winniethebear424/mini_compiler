// AST & Parser

typedef struct ASTNode {
    char type[10];
    char value[10];
    struct ASTNode * left, *right;
} ASTNode;