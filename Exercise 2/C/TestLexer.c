#include <stdio.h>
#include "Lexer.h"
#include "Lexer.c"

int main() {
    char* sourcecode = "Hello World the second - I coded this before. So yeah, FOXES ARE SUPERIOR.\nBut the professor wants us to write the following: \"index = 2 * count + 42;\"\n\n";
    printf(sourcecode);

    int lexer_state = _START_;
    do {
        switch (lexer_state) {
            case _START_:
                lexer_state = start(sourcecode);
                break;
            case _GET_NEXT_CHARACTER_:
                lexer_state = getNextCharacter();
                break;
            case _READ_IDENTIFIER_:
                lexer_state = readIdentifier();
                break;
            case _READ_NUM_LIT_:
                lexer_state = readNumLit();
                break;
            case _READ_OPERATOR_:
                lexer_state = readOperator();
                break;
            case _READ_PUNCTUATION_:
                lexer_state = readPunctuation();
                break;
            default: lexer_state = _ERROR_;
        }
    } while (lexer_state != _STOP_);

    // printf("Lexer exited with code ");
    // printf(lexer_state);

    return 0;
}
