/* Simple while loop that prints numbers 10 per line.
	Written by:
	Dare:
*/

#include<stdio.h>

int main(void)
{
	// Local Declarations
	int num;
	int lineCount;
	
	// Statements
	printf("Enter an integer between 1 and 100: ");
	scanf("%d", &num); // Initialization

	// Test number
	if(num > 100)
		num = 100;

	lineCount = 0;
	while(num > 0)
	{
		if(lineCount < 10)
			lineCount++;
		else
		{
			printf("\n");
			lineCount = 1;
		} // else
		printf("%4d", num--); // num-- updates loop
	} // while
	return 0;
} // main









	

