/* Test driver for function to print a calendar month.
	Written by:
	Date:
*/

#include<stdio.h>

// Prototype Declarations
void printMonth (int startDay, int days);

int main(void)
{
	// Statements
	printMonth(2, 29); // Day two is Tuesday
	return 0;
} // main

void printMonth (int startDay, int days)
{
	// Local Declarations
	int weekDay

	// Statements
	// print day header
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	printf("--- --- --- --- --- --- ---\n");

	// position first day
	for (weekDay = 0; weekDay < startDay; weekDay++)
		printf("     ");

	for (int dayCount = 1; dayCount <= days; dayCount++)
	{
		if (weekDay > 6)
			{
				printf("\n");
				weekDay = 1;
			} // if
		else
			weekDay++;
		printf("%3d ", dayCount);
	} // for
	printf("\n--- --- --- --- --- --- ---\n");
	return;
} // printMonth











