#include "Lexer.h"

int start(char* src) {
    if (src != 0) {                         // checking if the string is invalid
        if (*src != '\0') {                 // checking if the string is empty
            return _GET_NEXT_CHARACTER_;    // if src is valid: continueing the state machine
        }
    }
    return _STOP_;                          // stopping the state machine in any other case
}

int getNextCharacter(char* pos) {
    if (isLetter(*pos)) {
        return _READ_IDENTIFIER_;           // continues to read the identifier
    }
    return _STOP_;                          // stopping the state machine in any other case
}

int readIdentifier(char* src) {
    return _STOP_;                      // placeholder
}

int readNumLit(char* src) {
    return _STOP_;                      // placeholder
}

int readOperator(char* src) {
    return _STOP_;                      // placeholder
}

int readPunctuation(char* src) {
    return _STOP_;                      // placeholder
}

int isLetter(char in) {
    if (in >= 'A') {          // capital letters
        if (in <= 'Z') {
            return 1;
        }
    }
    if (in >= 'a') {          // non-capital letters
        if (in <= 'z') {
            return 1;
        }
    }
    return 0;               // returning 0 if it's no letter
}
