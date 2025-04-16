// AST & Parser

#ifndef AST_H
#define AST_H
typedef struct ASTNode {
    char type[10];
    char value[10];
    struct ASTNode * left;
    struct ASTNode * right;
} ASTNode;


// function to save AST to a JSON file
void save_ast_to_file(ASTNode *root, const char *filename);

// function to create a new AST node
ASTNode* create_node(const char *type, const char *value, ASTNode *left, ASTNode *right);

#endif