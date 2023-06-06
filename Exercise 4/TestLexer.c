#include <stdio.h>
#include "Lexer.h"

int main() {
    // creating a variable of type Lexer_s
    struct Lexer_s this_Lexer;      // declaring this_Lexer, not initialization -> random values
    
    // initializing the lexer with proper values
    init_Lexer(&this_Lexer, "index = 2 * count + 42;");
    
    // starting the lexer
    run_Lexer(&this_Lexer);

    return 0;
}
