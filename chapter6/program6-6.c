/* Demonstrate while and do...while loops.
	Written by:
	Date:
*/

#include<stdio.h>

int main (void)
{
	// Local Declarations
	int loopCount;

	// Statements
	loopCount = 5;
	printf("while loop	: ");
	while(loopCount> 0)
		printf("%3d", loopCount--);
	printf("\n\n");

	loopCount = 5;
	printf("do...while loop: ");
	do
		printf("%3d", loopCount--);
	while(loopCount> 0)
	printf("\n");
	return 0;
} // main
