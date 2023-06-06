#include "Lexer.h"

void init_Lexer(Lexer_t* lexptr, char* src_in){
    lexptr->state = _START_;
    lexptr->source_code = src_in;
    lexptr->current_pos = &src_in;
}

void run_Lexer(Lexer_t* lexer) {

}
