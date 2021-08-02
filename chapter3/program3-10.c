/* Print rightmost digit of an integer. 
	Written by:
	Date:
*/

#include <stdio.h>

int main(void){
	// Local Declarations
	int intNum;
	int oneDigit;

	// Statements
	printf("Enter an integral number: ");
	scanf("%d", &intNum);
	
	oneDigit = intNum % 10;
	printf("\nThe right digit is: %d", oneDigit);

	return 0;
} //main
