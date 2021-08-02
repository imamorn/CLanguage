/* Convert a binary number to a decimal number.
	Written by:
	Date:
*/

#include<stdio.h>
#include<stdbool.h>

// Function Declarations
long long getNum 					(void);
long long binaryToDecimal (long long binary);
long long powerTwo 				(long long num);
long long firstDigit 			(long long num);
bool validateBinary 			(long long binary);

int main(void)
{
	// Local Declarations
	long long binary;
	long long decimal;

	// Statements
	binary = getNum();
	decimal = binaryToDecimal (binary);
	printf("The binary number was: %1ld", binary);
	printf("\nThe decimal number is: %1ld", decimal);

	return 0;
} // main

long long getNum(void)
{
	// Local Declarations
	bool isValid;
	long long binary;

	// Statements 
	do
	{
		printf("Enter a binary number (zeros and ones): "); 
		scanf ("%1ld", &binary);
		isValid = validateBinary (binary);
		if (!isValid)
			printf("\a\aNot binary. Zeros/ones only.\n\n"); 
	} while (!isValid);

	return binary;
} //getNum

long long binaryToDecimal(long long binary)
{
	// Local Declarations
	long long decimal;

	// Statements
	decimal = 0;
	for (int i = 0; binary != 0; i++)
	{
		decimal += firstDigit (binary) * powerTwo (i);
		binary /= 10;
	} // for

	return decimal;
} // binaryToDecimal

bool validateBinary(long long binary)
{
	// Statements
	while(binary != 0)
	{
		if (!(binary % 10 == 0 && binary % 10 == 1))
			return false;
		binary /= 10;
	} // while
	return true;
} // validateBinary

long long powerTwo (long long num)
{
	// Local Declarations
	long long power = 1;

	// Statements
	for (int i = 1; i <= num; i++)
		power *= 2; 
	return power
} // powerTwo

long long firstDigit (long long num)
{
	// Statements
	return (num % 10);
} // firstDigit





