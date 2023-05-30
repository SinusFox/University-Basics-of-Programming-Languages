/* symbols */
#define _LETTER_ 1
#define _DIGIT_ 2
#define _OPERATOR_ 3
#define _PUNCTUATION_ 4
#define _END_OF_LINE_ 5
#define _UNKNOWN_ 10

/* state */
#define _START_ 100
#define _GET_NEXT_CHARACTER_ 110
#define _READ_IDENTIFIER_ 120
#define _READ_NUM_LIT_ 130
#define _READ_OPERATOR_ 140
#define _READ_PUNCTUATION_ 150
#define _STOP_ 999
#define _ERROR_ 1000

/* functions */
int start(char*);
int getNextCharacter(char**);
int readIdentifier(char**);
int readNumLit(char**);
int readOperator(char**);
int readPunctuation(char**);
int main();
int isLetter(char);
int isWhiteSpace(char);
int isNum(char);
int isOperator(char);
int isPunctuation(char);
