%{
int yylex();
void yyerror(char* s);			

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	#include<string.h>
    #include "../symbolTable/symboltable.h"

	int yylineno;
	
	
	


    

int a;
char val[200];

int last=0;

char datatp[200];
    
	


%}
%union	{int int_val;float real_val;char char_val;  char* id;

struct temp{
	int int_val;
	float real_val;
	char char_val;
	char string_val[200];
} tmp;



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


program :global_var program{;}
		|function program{;}
		|assignment program	{;}
		|global_var			{;}
		|function			{;}
		|assignment			{;}
			;
			

function : function_def function  {//printf("function\n");
			}
			|function_def          {//printf("function\n");
			}
			;

function_def : LEFT_PARENTHESES return_list RIGHT_PARENTHESES fun_id LEFT_PARENTHESES param_list RIGHT_PARENTHESES blocks {;}
				;


fun_id : IDENTIFIER	{

	int ax=table_insert_var(table,size,yylineno,$1,"function");
	
	
					if(ax==-1)
					{
						printf("%s name  is already used\n",$1);
						
					}
					

}
		;

return_list : data_type COMMA return_list  {;}
			|data_type                     {;}
			;

param_list : data_type IDENTIFIER COMMA param_list {;}
			|data_type IDENTIFIER					{;}
			|
			;



global_var : var_declareation {;}
			;



blocks : start_black block end_block {;}
		;

start_black :LEFT_CURLY_BRACKET {push();}
			;

end_block : RIGHT_CURLY_BRACKET {end_scop(yylineno);}
			;



block : var_declareation block {;}
		|var_declareation	{;}
		|assignment block		{;}
		|assignment		{;}
		|print block	{;}
		|print
		|blocks	block	{;}
		|blocks			{;}
		;

print	: printst exp SAMI_COLON	{
		if(stringcmp(datatp,"int")==1)
		{
			printf("printing %d\n",$2.int_val);
		}
		else if(stringcmp(datatp,"real")==1)
		{
			printf("printing %f\n",$2.real_val);
		}
		else if(stringcmp(datatp,"char")==1)
		{
			printf("printing %c\n",$2.char_val);
		}
		else
		{
			printf("printing %s\n",$2.string_val);
		}
}
		;	

printst	:PRINT {strcpy(datatp,"read");}
		;	



var_declareation : data_type variables SAMI_COLON var_declareation {//printf("var_declareation\n");
					}
					|data_type variables  SAMI_COLON {//printf("var_declareation\n");
					}
					;
				
variables : var_id COMMA variables {;}
			|var_id			{;}
			|var_id EQUEL exp	COMMA variables{
char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($3.real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=$3.char_val;
}
else
{
	strcpy(p,$3.string_val);
}
table_insert_value(table,size,val,p);
}
			|var_id EQUEL exp	{
char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($3.real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=$3.char_val;
}
else
{
	strcpy(p,$3.string_val);
}
table_insert_value(table,size,val,p);
}
			;
			
			
var_id : IDENTIFIER {
strcpy(val,$1);
int ax=table_insert_var(table,size,yylineno,$1,datatp);
	
	
					if(ax==-1)
					{
						printf("lineNo-%d\tvariable %s is already created\n",yylineno,$1);
						
					}
					else
					{
						top_increment();
						name_push($1);
					}
}
		;
		

data_type : INT_KEY {strcpy(datatp,$1);}
			|REAL_KEY {strcpy(datatp,$1);}
			|STRING_KEY {strcpy(datatp,$1);}
			|CHAR_KEY 	{strcpy(datatp,$1);}
			;
			
			
			
			
assignment:	assign_id EQUEL	exp SAMI_COLON	{ 
char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($3.real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=$3.char_val;
}
else
{
	strcpy(p,$3.string_val);
}
if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}



}
	|eqassign_id PLUS_AND_EQUEL exp	SAMI_COLON	{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val+$3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($1.real_val+$3.real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=($1.char_val+$3.char_val);
}
else
{
	strcpy(p,strcat($1.string_val,$3.string_val));
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id MINUS_AND_EQUEL exp SAMI_COLON	{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val-$3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($1.real_val-$3.real_val,p);
}
else if(stringcmp(datatp,"char")==1)
{
	p[0]=($1.char_val-$3.char_val);
}
else
{
	printf("minus operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id	MULTIPLY_AND_EQUEL	exp	SAMI_COLON	{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val*$3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($1.real_val*$3.real_val,p);
}
else
{
	printf("multiply operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id	DEVIDE_AND_EQUEL exp SAMI_COLON		{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val/$3.int_val,p);
}
else if(stringcmp(datatp,"real")==1)
{
	float_to_string($1.real_val/$3.real_val,p);
}
else
{
	printf("devide operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id  MODULES_AND_EQUEL exp SAMI_COLON	{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val%$3.int_val,p);
}
else
{
	printf("modules operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id	AND_AND_EQUEL	exp	SAMI_COLON		{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val&$3.int_val,p);
}
else
{
	printf("bitwise and operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id	OR_AND_EQUEL	exp SAMI_COLON		{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val|$3.int_val,p);
}
else
{
	printf("bitwise or operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	|eqassign_id 	XOR_AND_EQUEL	exp SAMI_COLON		{
		char p[200];

if(stringcmp(datatp,"int")==1)
{
	int_to_string($1.int_val^$3.int_val,p);
}
else
{
	printf("bitwise xor operation not define for %s datatype\n",datatp);
}



if(table_insert_value(table,size,val,p)==-1)
{
	printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
}
	}
	  ;

eqassign_id	:assign_id	{
	char x[200];
					

						if(read_table(table,size,val,x)==-1)
						{
							printf("lineNo-%d\tvariable %s is not created\n",yylineno,val);
							//exit(0);
						}
						else
						{
							if(stringcmp(datatp,"int")==1)
							{
								$$.int_val=string_to_int(x);
							}
							else if(stringcmp(datatp,"real")==1)
							{
								$$.real_val=string_to_float(x);
							}
							else if(stringcmp(datatp,"char")==1)
							{
								$$.char_val=x[0];
							}
							else
							{
								strcpy($$.string_val,x);
							}
						}
						
					
}
			;

assign_id: IDENTIFIER {
	strcpy(val,$1);
	if(read_var_type(table,size,$1,datatp)==-1)
	{
		//printf("lineNo-%d\t%s variable is not created\n",yylineno,$1);
	}
	
	}
    ;
exp : exp1	{;}
	| exp AND exp	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val&$3.int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			$$.char_val = $1.char_val&$3.char_val;
		}
		else
		{
			printf("bitwise and operation not define for %s datatype\n",datatp);
		}
	}
	| exp XOR exp	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val^$3.int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			$$.char_val = $1.char_val^$3.char_val;
		}
		else
		{
			printf("bitwise xor operation not define for %s datatype\n",datatp);
		}
	}
	| exp OR exp	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val|$3.int_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			$$.char_val = $1.char_val|$3.char_val;
		}
		else
		{
			printf("bitwise or operation not define for %s datatype\n",datatp);
		}
	}
	| exp LOGICAL_AND	exp	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val&&$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val&&$3.real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			$$.char_val = $1.char_val&&$3.char_val;
		}
		else
		{
			printf("logical and operation not define for %s datatype\n",datatp);
		}
	}
	| exp LOGICAL_OR	exp	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val||$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val||$3.real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			$$.char_val = $1.char_val||$3.char_val;
		}
		else
		{
			printf("logical or operation not define for %s datatype\n",datatp);
		}
	}
	;
exp1	:	exp2		{$$=$1; }
	|	exp1	PLUS	exp2	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val+$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val+$3.real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
		
			$$.char_val = $1.char_val+$3.char_val;
		}
		else
		{
		
			strcpy($$.string_val,strcat($1.string_val,$3.string_val));
		}
		
}
	|	exp1	MINUS	exp2	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val-$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val-$3.real_val;
		}
		else if(stringcmp(datatp,"char")==1)
		{
			$$.char_val = $1.char_val-$3.char_val;
		}
		else
		{
			printf("minus operation not define for %s datatype\n",datatp);
		}
	}
	| 	MINUS exp2 {
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = -1*$2.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = -1*$2.real_val;
		}
		else
		{
			printf("minus operation not define for %s datatype\n",datatp);
		}
	}
	|	PLUS  exp2	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $2.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $2.real_val;
		}
		else
		{
			printf("plus operation not define for %s datatype\n",datatp);
		}
	}		
	;


exp2	:	exp3		{$$=$1; }
    |   exp2	MULTIPLY	exp3	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val*$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val*$3.real_val;
		}
		else
		{
			printf("multiply operation not define for %s datatype\n",datatp);
		}
	}
    |   exp2	DEVIDE	exp3	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val/$3.int_val;
		}
		else if(stringcmp(datatp,"real")==1)
		{
			$$.real_val = $1.real_val/$3.real_val;
		}
		else
		{
			printf("devide operation not define for %s datatype\n",datatp);
		}
	}
    |   exp2	MODULES	exp3	{
		if(stringcmp(datatp,"int")==1)
		{
			$$.int_val = $1.int_val%$3.int_val;
		}
		else
		{
			printf("modules operation not define for %s datatype\n",datatp);
		}
	}
	;

exp3	: term			{$$=$1;}
		| LEFT_PARENTHESES exp RIGHT_PARENTHESES	{$$=$2;}
		;
	

term	:	INTEGER		{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"int");
						}

						if(stringcmp(datatp,"int")==1)
						{
							$$.int_val = $1;
						}
						else if(stringcmp(datatp,"real")==1)
						{
							$$.real_val=$1;
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %d is int data type\n",yylineno,datatp,$1);
						}
}
			|REAL		{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"real");
						}

						if(stringcmp(datatp,"real")==1)
						{
							$$.real_val = $1;
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %f is real data type\n",yylineno,datatp,$1);
						}
}
			|CHAR		{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"char");
						}
						if(stringcmp(datatp,"char")==1)
						{
							$$.char_val = $1;
						}
						else if(stringcmp(datatp,"string")==1)
						{
							$$.string_val[0]=$1;
							$$.string_val[1]='\0';
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %c is char data type\n",yylineno,datatp,$1);
						}
}
			|STRING		{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,"string");
						}
						if(stringcmp(datatp,"string")==1)
						{
							
							int ind=1;
							while($1[ind]!='\0')
							{
								$$.string_val[ind-1]=$1[ind];
								ind++;
							}
							$$.string_val[ind-2]='\0';
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %s is string data type\n",yylineno,datatp,$1);
						}
}
			|	IDENTIFIER	{
                    char x[200];
					char y[200];
					if(read_var_type(table,size,$1,y)==-1)
					{
						printf("lineNo-%d\tvariable %s is not created\n",yylineno,$1);
						
					}
					else 
					{
						if(stringcmp(datatp,"read")==1)
						{
							strcpy(datatp,y);
						}
						if(stringcmp(y,datatp)==1||(stringcmp(datatp,"string")==1&&stringcmp(y,"char")==1))
						{

						if(read_table(table,size,$1,x)==-1)
						{
							printf("lineNo-%d\tvariable %s is not created\n",yylineno,$1);
							//exit(0);
						}
						else
						{
							if(stringcmp(datatp,"int")==1)
							{
								$$.int_val=string_to_int(x);
							}
							else if(stringcmp(datatp,"real")==1)
							{
								$$.real_val=string_to_float(x);
							}
							else if(stringcmp(datatp,"char")==1)
							{
								$$.char_val=x[0];
							}
							else
							{
								if(stringcmp(y,"char")==1)
								{
									x[1]='\0';
								}
								strcpy($$.string_val,x);
							}
						}
						}
						else
						{
							printf("lineNo-%d\tneed %s data type and %s is %s data type\n",yylineno,datatp,$1,y);
						}
					}

                    
                    
                    }
	;

%%

int main(void){		

	

	return yyparse();
}
