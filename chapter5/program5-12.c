/* This program uses a menu to allow the user add,
	multiply subtract or divide two integers.
	Written by:
	Date:
*/

#include<stdio.h>
#include<stdlib.h>

// Function Declarations
int getOption (void);
void getData (int* num1, int* num2);
float calc (int option, int num1, int num2);

int main(void)
{
	// Local Declarations
	int option; 
	int num1; 
	int num2; 
	float result;

	// Statements
	option = getOption();
	getData (&num1, &num2);
	result = calc (option, num1, num2);
	printf("**In main result is: %6.2f",result);

	return 0;
} // main

int getOption(void) 
{
	// Local Declarations
	int option;

	// Statements
	printf("\t**********************************");
	printf("\n\t* 	MENU											 *");
	printf("\n\t*															 *");
	printf("\n\t* 1.ADD												 *");
	printf("\n\t* 2.SUBTRACT									 *");
	printf("\n\t* 3.MULTIPLY									 *");
	printf("\n\t* 4.DIVIDE										 *");
	printf("\n\t*															 *");
	printf("\n\t**********************************");

	printf("\n\nPlease type your choice ");
	printf("and key return: ");
	scanf ("%d", &option);

	return option;
} // getOption

void getData(int* a, int* b)
{
	printf("Please enter two integer numbers: ");
	scanf("%d %d", a, b);
	return;
}

float calc(int option, int num1, int num2)
{
	// Local Declarations
	float result;

	// Statements
	printf("**In calc input is: %d %d %d\n", option, num1, num2); 
	switch(option)
	{
		case 1: result = 1.0; // Add
						break;
		case 2: result = 2.0; // Subtract
						break;
		case 3: result = 3.0; // Multiply
						break;
		case 4: if(num2 == 0.0) // Divide
						{
							printf("\n\a\aError: ");
							printf("division by zero ***\n");
							exit(100);
						} // if
						else
							result = 4.0;
						break;

		default: printf("\aOption not available\n");
						 exit(101);
		} // switch

	printf("**In calc result is: %6.2f\n", result);
	return result;
} // calc




















