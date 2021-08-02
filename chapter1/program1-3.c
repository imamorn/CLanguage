/* This program reads two integers from the keyboard and prints their product.
	Written by: 
	Date:
*/

#include <stdio.h> 

int main (void){
	// Local Definitions 
	int number1;
	int number2; 
	int result;

	//Statements
	scanf ("%d", &number1);
	scanf ("%d", &number2);
	result = number1 * number2;
	printf ("%d", result);
	return 0;
}// main

