#include "Lexer.h"

int start(char* src) {
    if (src != 0) {                         // checking if the string is invalid
        if (*src != '\0') {                 // checking if the string is empty
            return _GET_NEXT_CHARACTER_;    // if src is valid: continueing the state machine
        }
    }
    return _STOP_;                          // stopping the state machine in any other case
}

int getNextCharacter(char* src) {
    return _STOP_;                      // placeholder
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
