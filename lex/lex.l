%option yylineno
%{
#include "tockens.h"
void yyerror(char *s);
%}

%%

%{
//CONSTANTS
%}
[0]|[1-9][0-9]*					{return INTEGER;}
(([0-9]+)|([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)	{return REAL;}
\"[^"]*\"					{return STRING;}
\'[^']*\'					{return CHAR;}

%{
//OPERATORS
%}
"+"	return PLUS;
"-"	return MINUS;
"**"	return POWER;
"*"	return MULTIPLY;
"/"	return DEVIDE;
"%"	return MODULES;

"&"	return AND;
"|" 	return OR;
"^" 	return XOR;
"~"	return NOT;
"="	return EQUEL;
"<>"	return NOT_EQUEL;
"<"	return LESS;
"<="	return LESS_OR_EQUEL;
">"	return GRETER;
">=" 	return GRETER_OR_EQUEL;
"+="	return PLUS_AND_EQUEL;
"-="	return MINUS_AND_EQUEL;
"*="	return MULTIPLY_AND_EQUEL;
"/="	return DEVIDE_AND_EQUEL;
"%="	return MODULES_AND_EQUEL;
"&="	return AND_AND_EQUEL;
"|=" 	return OR_AND_EQUEL;
"^="	return XOR_AND_EQUEL;
"&&" 	return LOGICAL_AND;
"||"	return LOGICAL_OR;
"$"	return DOLER;

%{
//KEYWORDS
%}
"if"		return IF;
"elif"		return ELIF;
"else"		return ELSE;
"loop"		return LOOP;
"in"		return IN;
"int" 		{return INT_KEY;}
"real"		{return REAL_KEY;}
"char"		{return CHAR_KEY;}
"void"		{return VOID;}
"string"	{return STRING_KEY;}
"return"	{return RETURN;}
"print"		return PRINT;

%{
//IDENTIFIER
%}
[_a-zA-Z][_a-zA-Z0-9]*	{return IDENTIFIER;}

%{
//DELIMITER
%}
"("	return LEFT_PARENTHESES;
")"	return RIGHT_PARENTHESES;
"{"	return LEFT_CURLY_BRACKET;
"}"	return RIGHT_CURLY_BRACKET;
"["	return LEFT_SQUARE_BRACKET;
"]"	return RIGHT_SQUARE_BRACKET;

%{
//SEPARATORS
%}
";"	return SAMI_COLON;
","	return COMMA;

[ \n\t]	;

.	{ECHO; yyerror("Unexpected char");}	

%%

int yywrap(void)
{
	return 1;
}
void yyerror(char *s){
	fprintf(stderr,"\tlineNo-%d\t %s\n",yylineno,s);
	exit(0);
}