IDENT      [a-zA-Z_][_a-zA-Z0-9]*
MCOMMENT   "/*"((("*"[^/])?)|[^*])*"*/"
SCOMMENT   "//".*
PRE		   ^"#".*
%%
		/* comments in c! */
			/* multi line */
{MCOMMENT} 				printf ("Multi Comment\n");
			/* single line */
{SCOMMENT}				printf ("Single Comment\n");
		/* skip preprocessor lines */
{PRE}					printf ("Preprocessor\n");
		/*	reserved keywords */
auto					printf ("keyword - âuto\n");
double					printf ("keyword - double\n");
int						printf ("keyword - int\n");
string                  printf ("Keyword - string\n");
break					printf ("keyword - break\n");
struct					printf ("keyword - struct\n");
else					printf ("keyword - else\n");
long					printf ("keyword - long\n");
switch					printf ("keyword - switch\n");
case					printf ("keyword - case\n");
enum					printf ("keyword - enum\n");
register				printf ("keyword - register\n");
typedef					printf ("keyword - typeof\n");
char					printf ("keyword - char\n");
return					printf ("keyword - return\n");
union					printf ("keyword - union\n");
const					printf ("keyword - const\n");
float					printf ("keyword - float\n");
short					printf ("keyword - short\n");
unsigned				printf ("keyword - unsigned\n");
continue				printf ("keyword - continue\n");
for						printf ("keyword - for\n");
signed					printf ("keyword - signed\n");
void					printf ("keyword - void\n");
default					printf ("keyword - default\n");
goto					printf ("keyword - goto\n");
sizeof					printf ("keyword - sizeof\n");
do						printf ("keyword - do\n");
if						printf ("keyword - if\n");
static					printf ("keyword - static\n");
while					printf ("keyword - while\n");
printf					printf ("keyword - printf\n");
scanf					printf ("keyword - scanf\n");
		/* constants */
			/* decimal */
[-+]?[0-9]+				printf ("INT NUMBER\n");
			/* hexadecimal */
OX[0-9abcdef]+			printf ("HEX NUMBER\n");
			/* real(fractional) */
[-+]?[0-9]+(\.[0-9]+)?	printf ("Fractional NUMBER\n");
			/* single character */
'([^\r^\n^']|\\0)'		printf ("char\n");;
			/* strings */
\"[^\"]*\" 				printf ("String\n");
		/* Identifier (variable names) */
{IDENT}					printf ("Identefier\n");

		/* operators */
			/* arithmetic */
\=						printf ("Assignment\n");
\+						printf ("Operator\n");
- 						printf ("Operator\n");
\* 						printf ("Operator\n");
\/ 						printf ("Operator\n");
\%						printf ("Operator\n");
\+\+					printf ("INC Operator\n");
"--"					printf ("DIC Operator\n");

			/* relational */						
==						printf ("Comparison Operator\n");
!=						printf ("Comparison Operator\n");
\> 						printf ("Comparison Operator\n");
\< 						printf ("Comparison Operator\n");
\>=						printf ("Comparison Operator\n");
\<=						printf ("Comparison Operator\n");
			/* logical */						
&&						printf ("Logical Operator\n");
\|\|					printf ("Logical Operator\n");
!						printf ("Logical Operator\n");
			/* bitwise */					
& 						printf ("Bitwise Operator\n");
\| 						printf ("Bitwise Operator\n");
\^ 						printf ("Bitwise Operator\n");
~ 						printf ("Bitwise Operator\n");
\<\<					printf ("Bitwise Operator\n");
\>\>					printf ("Bitwise Operator\n");
			/* punctuators */
\(						printf ("PUNCTUATOR\n");
\)						printf ("PUNCTUATOR\n");
\{						printf ("PUNCTUATOR\n");
\}						printf ("PUNCTUATOR\n");
\[						printf ("PUNCTUATOR\n");
\]						printf ("PUNCTUATOR\n");
,						printf ("COMA\n");
:						printf ("COLON\n");
;						printf ("SEMICOLON\n");

		/* skip new lines and blank spaces */
[ \t\n]					printf ("Blank\n");
		/* everything not defined before is caught here, considered an error */
.						printf ("ERROR\n");	

%%

main ()
{ yylex(); }
yywrap()
{ }
