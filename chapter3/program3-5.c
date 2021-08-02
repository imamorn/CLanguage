/* Examine the effect of precedence on an expression. 
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){
	// Local Declarations
	int a = 10;
	int b = 20; 
	int c = 30;

	// Statements 
	printf("a * b + c is: %d\n", a * b + c);
	printf("a * (b + c) is: %d\n", a * (b + c)); 
	return 0;
 
}// main
