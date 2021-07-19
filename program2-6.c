/*Display the decimal value of selected characters,
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){

	// Local Declarations
	char A = 'A';
	char a = 'a';
	char B = 'B';
	char b = 'b';
	char Zed = 'Z';
	char zed = 'z';
	char zero = '0';
	char eight = '8';
	char NL = '\n'; // newline
	char HT = '\t'; // horizontal tab
	char VT = '\v'; // vertical tab
	char SP = ' '; // blank or space
	char BEL = '\a'; // alert (bell)
	char dblQuote = '"';  // double quote
	char backslash = '\\'; // backslash itself
	char oneQuote = '\''; // single quote itself

	// Statements
	printf("ASCII for char 'A' is: %d\n", A)
	printf("ASCII for char 'a' is: %d\n", a)
	printf("ASCII for char 'B' is: %d\n", B)
	printf("ASCII for char 'b' is: %d\n", b)
	printf("ASCII for char 'Z' is: %d\n", Zed);
	printf("ASCII for char 'z' is: %d\n", zed);
	printf("ASCII for char '0' is: %d\n", zero);
	printf("ASCII for char '8' is: %d\n", eight);
	Printf("ASCII for char '\\n' is: %d\n", NL);
	Printf("ASCII for char '\\t' is: %d\n", HT);
	printf("ASCII for char '\\v' is: %d\n", VT);
	Printf("ASCII for char ' ' 	 is: %d\n", SP);
	Printf("ASCII for char '\\a' is: %d\n", BEL);
	printf("ASCII for char '\"' is: %d\n", dblQuote);
	Printf("ASCII for char '\\' is: %d\n", backslash);
	Printf("ASCII for char '\'' is: %d\n", oneQuote);

	return 0;
} // main





