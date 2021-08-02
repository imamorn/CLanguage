/* Print a number series from 1 to user-specified limit
	in the form of a right triangle.
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Local Declarations
	int limit;

	// Statements
	// Read limits
	printf("\nPlease enter a number 1 and 9: ");
	scanf("%d", &limit);

	for (int row = 1; row <= limit; row++)
	{
		for (int col = 1; col <= limit; col++)
			if(row >= col)
				printf("%d", col);
			else
				printf("*");

		printf("\n");
	} // for row ...
	return 0;
} // main
