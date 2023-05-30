#include "Lexer.h"

int start(char* src) {
    if (src != 0) {                         // checking if the string is invalid
        if (*src != '\0') {                 // checking if the string is empty
            return _GET_NEXT_CHARACTER_;    // if src is valid: continueing the state machine
        }
    }
    return _STOP_;                          // stopping the state machine in any other case
}

int getNextCharacter(char** ptr_current) {
    char* pos = *ptr_current;
    while(isWhiteSpace(*pos)) pos++;
    if (isLetter(*pos)) return _READ_IDENTIFIER_;
    if (isNum(*pos)) return _READ_NUM_LIT_;
    if (isOperator(*pos)) return _READ_OPERATOR_;
    return _STOP_;                          // stopping the state machine in any other case
}

int readIdentifier(char** ptr_current) {
    char* pos = *ptr_current;
    printf("%c - Identifier\n", *pos);
    pos++;
    *ptr_current = pos;
    return _GET_NEXT_CHARACTER_;
}

int readNumLit(char** ptr_current) {
    char* pos = *ptr_current;
    printf("%c - Number\n", *pos);
    return _GET_NEXT_CHARACTER_;
}

int readOperator(char** ptr_current) {
    char* pos = *ptr_current;
    printf("%c - Operator\n", *pos);
    return _GET_NEXT_CHARACTER_;
}

int readPunctuation(char** ptr_current) {
    char* pos = *ptr_current;
    printf("%c - Punctuation\n", *pos);
    return _GET_NEXT_CHARACTER_;
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

int isWhiteSpace(char in) {
    if (in == ' ' || in == '\n') return 1;
    return 0;
}

int isNum(char in) {
    if (in >= '0' && in <= 0) return 1;
    return 0;
}

int isOperator(char in) {
    switch(in) {
        case '=':
            break;
        case '*':
            break;
        case '+':
            break;
        default:
            return 0;
    }
    return 1;
}

int isPunctuation(char in) {
    if (in == ';') return 1;
    return 0;
}
