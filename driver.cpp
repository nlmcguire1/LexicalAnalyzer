//*****************************************************************************
// Lexical Analyzer Assignment
// Driver for lexical analyzer
//*****************************************************************************
#include "lexer.h"

// Instantiate global variables
FILE *yyin;         // input stream
FILE *yyout;        // output stream
int   yyleng;       // length of current lexeme
char *yytext;       // text of current lexeme

// Do the analysis
int main( int argc, char* argv[] )
{
  int token;   // hold each token code

  // Set the input and output streams
  yyin = stdin;
  yyout = stdout;
 
  // Do the lexical parsing
  token = yylex();
  while( token != TOK_EOF ) 
  {
    // What did we find?
    printf("lexeme: |%s|, length: %d, token: %d\n", yytext, yyleng, token);
    // Is it an error?
    if( token == TOK_UNKNOWN )
      printf("   ERROR: unknown token\n");
    //if( token == TOK_EOF_SL )
    //  printf("   ERROR: end of file while in a string literal\n");
    
    // Get the next token
    token = yylex();
  }
}
