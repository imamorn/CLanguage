/* Demonstrate while and do... while loops.
	Written by:
	Date:
*/

#include<stdio.h> 

int main(void) 
{
	// Local Declarations 10 int loopCount;
	int testCount;

	// Statements
	loopCount = 1;
	testCount = 0;
	printf("while loop:		");

	while (testCount++, loopCount <= 10)
		printf("%3d", loopCount++);
	printf("Loop Count: %3d\n", loopCount);
	printf("Number of tests: %3d\n", testCount);

	loopCount = 1;
	testCount = 0;
	printf("\ndo...while loop: ");
	do
		printf("%3d", loopCount++);
	while (testCount++, loopCount <= 10);

	printf("\nLoop Count: %3d\n", loopCount);
	printf("Number of tests: %3d\n", testCount);
	return 0;
} // main
