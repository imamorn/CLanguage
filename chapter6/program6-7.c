/* Add a list of integers from the standard input unit 
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Local Declarations
	int x;
	int sum = 0;
 	int testEOF;

	// Statements
	printf("Enter your numbers: <EOF> to stop.\n");
	do
	{
		testEOF = scanf("%d", &x);
		if(testEOF != EOF)
			sum += x;
	}while(testEOF != EOF);
	printf ("\nTotal: %d\n", sum);

	return 0;
} // main
