#include<stdio.h>
#include<string.h>
#include "tockens.h"


extern int yylex();
extern int yylineno;
extern char* yytext;

char* names[]={"INTEGER","REAL","PLUS","MINUS","MULTIPLY","DEVIDE","MODULES","POWER","AND","OR","XOR","NOT",
"EQUEL","NOT_EQUEL","LESS","LESS_OR_EQUEL","GRETER","GRETER_OR_EQUEL","PLUS_AND_EQUEL","MINUS_AND_EQUEL",
"MULTIPLY_AND_EQUEL","DEVIDE_AND_EQUEL","MODULES_AND_EQUEL","POWER_AND_EQUEL","AND_AND_EQUEL",
"OR_AND_EQUEL","XOR_AND_EQUEL","LOGICAL_AND","LOGICAL_OR","DOLER","IF","ELIF","ELSE","LOOP","IN","INT_KEY","REAL_KEY","CHAR_KEY","VOID","STRING_KEY","RETURN","IDENTIFIER",
"LEFT_PARENTHESES","RIGHT_PARENTHESES","LEFT_CURLY_BRACKET","RIGHT_CURLY_BRACKET","LEFT_SQUARE_BRACKET",
"RIGHT_SQUARE_BRACKET","SAMI_COLON","COMMA","STRING","CHAR","PRINT"};
int main(void)
{
	int ntoken;
	ntoken=yylex();
	while(ntoken){	
        printf("<%d,%s>  %s\n",ntoken,names[ntoken-1],yytext);
        ntoken=yylex();
	}
	return 0;
}
