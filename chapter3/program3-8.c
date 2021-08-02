/* Demonstrate casting of numeric types. 
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){

	// Local Declarations
	char aChar = '\0'; 
	int intNum1 = 100;
	int intNum2 = 45;
	double fltNum1 = 100.0;
	double fltNum2 = 45.0;
	double fltNum3;

	// Statements
	printf("aChar numeric 	: %3d\n", aChar); 
	printf("intNum1 contains: %3d\n", intNum1); 
	printf("intNum2 contains: %3d\n", intNum2); 
	printf("fltNum1 contains: %6.2f\n", fltNum1); 
	printf("fltNum2 contains: %6.2f\n", fltNum2);

	fltNum3 = (double)(intNum1 / intNum2); 
	printf("\n(double)(intNum1 / intNum2): %6.2f\n", fltNum3);
	fltNum3 = (double)intNum1 / intNum2; 
	printf("(double) intNum1 / intNum2 : %6.2f\n", fltNum3);
	aChar = (char)(fltNum1 / fltNum2);
	printf(" (char)(fltNum1 / fltNum2): %3d\n", aChar);

	return 0; 
} // main

 
