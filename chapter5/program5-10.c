/* This program demonstrates the use of the character
	classification functions found in the c-type library.
	Given a character, it displays the highest
	classification for the character.
	Written by:
	Date:
*/

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	// Local Declarations
	char charIn;

	// Statements
	printf("Enter a character to be examined: ");
	scanf("%c", &charln);

	if (islower(charln))
		printf("You entered a lowercase letter.\n");
	else if (isupper(charln))
		printf("You entered an uppercase letter.\n");
	else if (isdigit(charln))
		printf("You entered a digit.\n");
	else if (ispunct(charln))
		printf("You entered a punctuation character.\n");
	else if (isspace(charln))
		printf("You entered a whitespace character.\n");
	else
		printf("You entered a control character.\n");

	return 0;
} // main

