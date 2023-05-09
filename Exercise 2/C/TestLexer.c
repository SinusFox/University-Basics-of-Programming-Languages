#include <stdio.h>
#include "Lexer.h"

int start(char* sourcecode) {
    if (sourcecode != NULL) {
        return _GET_NEXT_CHARACTER_;
    } else {
        return _STOP_;
    }
}

int main() {
    char* sourcecode = "Hello World the second - I coded this before. So yeah, FOXES ARE SUPERIOR.\nBut the professor wants us to write the following: \"index = 2 * count + 42;\"";
    printf(sourcecode);

    int lexer_state = _START_;
    do {
        switch (lexer_state) {
            case _START_:
                lexer_state = start(sourcecode);
                break;
            default: lexer_state = _ERROR_;
        }
    } while (lexer_state != _STOP_);

    return 0;
}
