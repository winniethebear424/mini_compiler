

// Setup JSON serialization for AST in C (to hand off to Rust)
// ast.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include "ast.h"

// create a new AST node
ASTNode *create_node(const char *type, const char *value, ASTNode *left, ASTNode *right) {
    ASTNode *node = malloc(sizeof(ASTNode));
    if (!node) return NULL;

    strncpy(node->type, type, sizeof(node->type));
    strncpy(node->value, value, sizeof(node->value));
    node->left = left;
    node->right = right;
    return node;
}

void save_ast_as_json(ASTNode *node, FILE *fp){
    if (!node){
        fprintf(fp, "null");
        return;
    }
    fprintf(fp, "{");
    fprintf(fp, "\"type\":\"%s\",", node->type);
    fprintf(fp, "\"value\":\"%s\",", node->value);
    fprintf(fp, "\"left\":");
    save_ast_as_json(node->left, fp);
    fprintf(fp, ",\"right\":");
    save_ast_as_json(node->right, fp);
    fprintf(fp, "}");
}

void save_ast_to_file(ASTNode *root, const char *filename){
    FILE *fp = fopen(filename, "w");
    if (!fp){
        perror("Failed to open file");
        return;
    }
    save_ast_as_json(root, fp);
    fclose(fp);
}