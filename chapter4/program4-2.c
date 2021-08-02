/*This program demonstrates that one function can be
	called multiple times. 
	Written by:
	Date:
*/

#include<stdio.h>

// Function Declarations
void printOne(int x);

int main(void)
{
	// Local Declarations
	int a;

	a = 5; // First call
	printOne(a);

	a = 33; // Second call
	printOne(a);

	// Done. Return to operating system.
	return 0;

} //main

void printOne(int x)
{
	// Statements
	printf("%d\n", x);
	return;

} // printOne

