//*****************************************************************************
// CSC 442 - Lexical Analyzer Assignment
// Lexical Analyzer Header
//*****************************************************************************
 
#ifndef LEXER_H
#define LEXER_H

// Include standard IO streams
#include <stdio.h>

// The lexical analyzer global variables and functions
extern int   yylex();
extern FILE *yyin;         // input stream
extern FILE *yyout;        // output stream
extern int   yyleng;       // length of current lexeme
extern char *yytext;       // text of current lexeme

// Maximum lexeme length
#define MAX_LEXEME_LEN 100

// List of token codes

#define TOK_EOF          5000  // end of file
#define TOK_EOF_SL       5001  // end of file while parsing string literal, 

#define TOK_UNKNOWN      6000  // unknown lexeme

#endif

