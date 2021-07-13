%{
int yylex();
void yyerror(char* s);			

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	#include<string.h>
	int yylineno;
%}
%union	{int int_val;float real_val;char char_val;  char* id;

}	
		

%start	program


%token <int_val> INTEGER
%token <real_val> REAL
%token PLUS
%token MINUS
%token MULTIPLY
%token DEVIDE
%token MODULES
%token POWER
%token AND
%token OR
%token XOR
%token NOT
%token EQUEL
%token NOT_EQUEL
%token LESS
%token LESS_OR_EQUEL
%token GRETER
%token GRETER_OR_EQUEL
%token PLUS_AND_EQUEL
%token MINUS_AND_EQUEL
%token MULTIPLY_AND_EQUEL
%token DEVIDE_AND_EQUEL
%token MODULES_AND_EQUEL
%token POWER_AND_EQUEL
%token AND_AND_EQUEL
%token OR_AND_EQUEL
%token XOR_AND_EQUEL
%token LOGICAL_AND
%token LOGICAL_OR
%token DOLER
%token IF
%token ELIF
%token ELSE
%token LOOP
%token IN
%token <id> INT_KEY
%token <id> REAL_KEY
%token <id> CHAR_KEY
%token <id> VOID
%token <id> STRING_KEY
%token <id> RETURN
%token <id> IDENTIFIER
%token LEFT_PARENTHESES
%token RIGHT_PARENTHESES
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
%token LEFT_SQUARE_BRACKET
%token RIGHT_SQUARE_BRACKET
%token SAMI_COLON
%token COMMA
%token <id> STRING
%token <char_val> CHAR
%token PRINT

%type <id> global_var
%type <tmp> term exp exp1 exp2 exp3 eqassign_id
		



%% 

program :global_var program{printf("program -> global_var program\n");}
		|function program{printf("program -> function program\n");}
		|assignment program	{printf("program -> assignment program\n");}
		|global_var			{printf("program -> global_var\n");}
		|function			{printf("program -> function\n");}
		|assignment			{printf("program -> assignment\n");}
			;
			

function : function_def function  {printf("function -> function_def function\n");}
			|function_def          {printf("function -> function_def\n");}
			;

function_def : LEFT_PARENTHESES return_list RIGHT_PARENTHESES fun_id LEFT_PARENTHESES param_list RIGHT_PARENTHESES blocks {
				printf("function_def -> LEFT_PARENTHESES return_list RIGHT_PARENTHESES fun_id LEFT_PARENTHESES param_list RIGHT_PARENTHESES blocks\n");
				}
				;

fun_id : IDENTIFIER	{printf("fun_id -> IDENTIFIER\n");}
		;

return_list : data_type COMMA return_list  {printf("return_list -> data_type COMMA return_list\n");}
			|data_type                     {printf("return_list -> data_type\n");}
			;

param_list : data_type IDENTIFIER COMMA param_list {printf("param_list -> data_type IDENTIFIER COMMA param_list\n");}
			|data_type IDENTIFIER					{printf("param_list -> data_type IDENTIFIER\n");}
			|
			;

global_var : var_declareation {printf("global_var -> var_declareation\n");}
			;

blocks : start_black block end_block {printf("blocks -> start_black block end_block\n");}
		;

start_black :LEFT_CURLY_BRACKET {printf("start_black -> LEFT_CURLY_BRACKET\n");}
			;

end_block : RIGHT_CURLY_BRACKET {printf("end_block -> RIGHT_CURLY_BRACKET\n");}
			;

block : var_declareation block {printf("block -> var_declareation block\n");}
		|var_declareation	{printf("block -> var_declareation\n");}
		|assignment block		{printf("block -> assignment block\n");}
		|assignment		{printf("block -> assignment\n");}
		|print block	{printf("block -> print block\n");}
		|print			{printf("block -> print\n");}
		|blocks	block	{printf("block -> blocks block\n");}
		|blocks			{printf("block -> blocks\n");}
		;

print	: printst exp SAMI_COLON	{printf("print -> printst exp SAMI_COLON\n");}
		;	

printst	:PRINT {printf("printst -> PRINT\n");}
		;	

var_declareation : data_type variables SAMI_COLON var_declareation {printf("var_declareation -> data_type variables SAMI_COLON var_declareation\n");}
					|data_type variables  SAMI_COLON {printf("var_declareation -> data_type variables SAMI_COLON\n");}
					;
				
variables : var_id COMMA variables {printf("variables -> var_id COMMA variables\n");}
			|var_id			{printf("variables -> var_id\n");}
			|var_id EQUEL exp	COMMA variables{printf("variables -> var_id EQUEL exp	COMMA variables\n");}
			|var_id EQUEL exp	{printf("variables -> var_id EQUEL exp\n");}
			;
					
var_id : IDENTIFIER {printf("var_id -> IDENTIFIER\n");}
		;

data_type : INT_KEY {printf("data_type -> INT_KEY\n");}
			|REAL_KEY {printf("data_type -> REAL_KEY\n");}
			|STRING_KEY {printf("data_type -> STRING_KEY\n");}
			|CHAR_KEY 	{printf("data_type -> CHAR_KEY\n");}
			;
						
assignment:	assign_id EQUEL	exp SAMI_COLON	{printf("assignment -> assign_id EQUEL	exp SAMI_COLON\n");}
	|eqassign_id PLUS_AND_EQUEL exp	SAMI_COLON	{printf("assignment -> eqassign_id PLUS_AND_EQUEL exp	SAMI_COLON\n");}
	|eqassign_id MINUS_AND_EQUEL exp SAMI_COLON	{printf("assignment -> eqassign_id MINUS_AND_EQUEL exp SAMI_COLON\n");}
	|eqassign_id	MULTIPLY_AND_EQUEL	exp	SAMI_COLON	{printf("assignment -> eqassign_id	MULTIPLY_AND_EQUEL	exp	SAMI_COLON\n");}
	|eqassign_id	DEVIDE_AND_EQUEL exp SAMI_COLON		{printf("assignment -> eqassign_id	DEVIDE_AND_EQUEL exp SAMI_COLON	\n");}
	|eqassign_id  MODULES_AND_EQUEL exp SAMI_COLON	{printf("assignment -> eqassign_id  MODULES_AND_EQUEL exp SAMI_COLON\n");}
	|eqassign_id	AND_AND_EQUEL	exp	SAMI_COLON		{printf("assignment -> eqassign_id	AND_AND_EQUEL	exp	SAMI_COLON\n");}
	|eqassign_id	OR_AND_EQUEL	exp SAMI_COLON		{printf("assignment -> eqassign_id	OR_AND_EQUEL	exp SAMI_COLON	\n");}
	|eqassign_id 	XOR_AND_EQUEL	exp SAMI_COLON		{printf("assignment -> eqassign_id 	XOR_AND_EQUEL	exp SAMI_COLON\n");}
	  ;

eqassign_id	:assign_id	{printf("eqassign_id -> assign_id\n");}
			;

assign_id: IDENTIFIER {printf("assign_id -> IDENTIFIER\n");}
    ;

exp : exp1	{printf("exp -> exp1\n");}
	| exp AND exp	{printf("exp -> exp AND exp\n");}
	| exp XOR exp	{printf("exp -> exp XOR exp\n");}
	| exp OR exp	{printf("exp -> exp OR exp\n");}
	| exp LOGICAL_AND	exp	{printf("exp -> exp LOGICAL_AND	exp\n");}
	| exp LOGICAL_OR	exp	{printf("exp -> exp LOGICAL_OR	exp\n");}
	;

exp1	:	exp2		{printf("exp1->exp2\n");}
	|	exp1	PLUS	exp2	{printf("exp1 -> exp1 PLUS exp2\n");}
	|	exp1	MINUS	exp2	{printf("exp1->exp1 MINUS exp2\n");}
	| 	MINUS exp2 {printf("exp1-> MINUS exp2\n");}
	|	PLUS  exp2	{printf("exp1-> PLUS exp2\n");}		
	;

exp2	:	exp3		{printf("exp2 -> exp3\n");}
    |   exp2	MULTIPLY	exp3	{printf("exp2 -> exp2 MULTIPLY exp3\n");}
    |   exp2	DEVIDE	exp3	{printf("exp2 -> exp2 DEVIDE exp3\n");}
    |   exp2	MODULES	exp3	{printf("exp2 -> exp2 MODULES exp3\n");}
	;

exp3	: term			{printf("exp3 -> term\n");}
		| LEFT_PARENTHESES exp RIGHT_PARENTHESES	{printf("exp3 -> LEFT_PARENTHESES exp RIGHT_PARENTHESES\n");}
		;

term	:	INTEGER		{printf("term -> INTEGER\n");}
			|REAL		{printf("term -> REAL\n");}
			|CHAR		{printf("term -> CHAR\n");}
			|STRING		{printf("term -> STRING\n");}
			|IDENTIFIER	{printf("term -> IDENTIFIER\n");}
	;

%%

int main(void){	
	return yyparse();
}
