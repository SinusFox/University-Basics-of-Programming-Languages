#include <stdio.h>
#include "Lexer.h"
#include "Lexer.c"

int main() {
    // variables
    char* sourcecode = "index = 2 * count + 42;";               // input string
    int lexer_state = _START_;                                  // int var for the state machine

    // checking var values
    printf(sourcecode);                                         // printing the input string to check it

    // main loop
    do {
        switch (lexer_state) {                                  // state machine starts here
            case _START_:
                lexer_state = start(sourcecode);
                break;
            case _GET_NEXT_CHARACTER_:
                lexer_state = getNextCharacter(sourcecode);
                break;
            case _READ_IDENTIFIER_:
                lexer_state = readIdentifier(sourcecode);
                break;
            case _READ_NUM_LIT_:
                lexer_state = readNumLit(sourcecode);
                break;
            case _READ_OPERATOR_:
                lexer_state = readOperator(sourcecode);
                break;
            case _READ_PUNCTUATION_:
                lexer_state = readPunctuation(sourcecode);
                break;
            default: lexer_state = _ERROR_;
        }
    } while (lexer_state != _STOP_);                            // state machine ends here

    // printf("Lexer exited with code ");
    // printf(lexer_state);

    return 0;
}
