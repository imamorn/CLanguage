/* Evaluate two complex expressions. 
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){

	// Local Declarations
	int a = 3;
	int b = 4;
	int c = 5;
	int x;
	int y;

	// Statements
	printf("Initial values of the variables: \n");
	printf("a = %d\tb = %d\tc = %d\n\n", a, b, c);

	x = a * 4 + b / 2 - c * b;
	printf("Value of a * 4 + b / 2 - c * b: %d\n", x);
	y = --a * (3 + b) / 2 - c++ * b;
	printf("Value of --a * (3 + b) / 2 - c++ * b: %d\n", y);
	printf("\nValues of the variables are now: \n");
	printf("a = %d\tb = %d\tc = %d\n\n", a, b, c);

	return 0;
} // main
