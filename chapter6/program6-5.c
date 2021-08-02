/* Print numbers on a line.
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Statements
	for (int i = 1; i <= 3; i++)
	{
		printf("Row %d: ", i);
		for (int j = 1; j <= 5; j++)
			printf("%3d", j);
		printf("\n");
	} // for i
	return 0;
} // main

