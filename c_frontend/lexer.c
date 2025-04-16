// Build a Basic Lexer

#include <stdio.h>
#include <ctype.h>

void tokenize (const char * code) {
    while (*code) {
        if (isdigit(*code)){
            printf("TOKEN(NUMBER): %c\n", *code);
        } else if (*code == '+' || *code == '-') {
            printf("TOKEN(OP): %c\n", *code);
            }
        code ++; // Move to the next character
    }
}