/* Print the number and sum of digits in an integer.
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Local Declarations
	int number;
	int count = 0;
	int sum = 0;

	// Statements
	printf("Enter an integer: ");
	scanf("%d", &number);
	printf("Your number is:    %d\n\n", number);

	while(number != 0)
	{
		count++;
		sum += number % 10;
		number /= 10;

	} // while

	printf("The number of digits is %3d\n", count);
	printf("The sum of digits is    %3d\n", sum);

	return 0;
} // main

