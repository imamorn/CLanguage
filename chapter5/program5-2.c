/* Demonstrates the results of relational operators.
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Local declarations
	int a = 5;
	int b = -3;

	// Statements *
	printf(" %2d < %2d is %2d\n", a, b, a < b);
	printf(" %2d == %2d is %2d\n", a, b, a == b);
	printf(" %2d != %2d is %2d\n", a, b, a != b);
	printf(" %2d > %2d is %2d\n", a, b, a > b);
	printf(" %2d <= %2d is %2d\n", a, b, a <= b);
	printf(" %2d >= %2d is %2d\n", a, b, a >= b);

	return 0;
} // main
