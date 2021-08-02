/* Calculate and print quotient and remainder of two numbers.
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){

	// Local Declarations 
	int intNum1;
	int intNum2;
	int intCalc;
	
	// Statements
	printf("Enter two integral numbers: "); 
	scanf("%d %d", &intNum1, &intNum2);

	intCalc = intNum1 / intNum2;
	printf("%d / %d is %d", intNum1, intNum2, intCalc);
	intCalc = intNum1 % intNum2;
	printf(" with a remainder of: %d\n", intCalc);

	return 0;
} // main
