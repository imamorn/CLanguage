 /* Demonstrate the results of logical operators.
	Written by:
	Date: 
*/

#include<stdio.h>
#include<stdbool.h>

int main(void)
{

	// Local Declarations
	bool a = true;
	bool b = true;
	bool c = false;

	// Statements
	printf(" %2d AND %2d: %2d\n", a, b, a && b);
	printf(" %2d AND %2d: %2d\n", a, c, a && c);
	printf(" %2d AND %2d: %2d\n", c, a, c && a);
	printf(" %2d OR %2d: %2d\n", a, c, a || b);
	printf(" %2d OR %2d: %2d\n", c, a, a || b);
	printf(" %2d OR %2d: %2d\n", c, c, a || b);
	printf("NOT %2d AND NOT %2d: %2d\n", a, c, !a && !c);
	printf("NOT %2d AND %2d: %2d\n", a, c, !a && c);
	printf("    %2d AND NOT %2d: %2d\n", a, c, a && !c);

	return 0;
} // main


