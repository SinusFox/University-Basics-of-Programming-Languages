#include "Lexer.h"

int start(char* src) {
    if (src != 0 && src != '\0') {      // checking if the string is empty or invalid
        return _GET_NEXT_CHARACTER_;
    }
    return _STOP_;
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
