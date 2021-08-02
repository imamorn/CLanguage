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

	for (int lineCtrl = 1; lineCtrl <= limit; lineCtrl++)
	{
		for (int numCtrl = 1;
						 numCtrl <= lineCtrl;
						 numCtrl++)
			printf("%1d", numCtrl); 

		printf("\n");
	} // lineCtrl
	return 0;
} // main
