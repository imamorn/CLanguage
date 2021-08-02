/* This reads a test score, the letter 
	grade for the score, and prints the grade. 
	Written by:
	Date:
*/

#include<stdio.h>

// Function Declarations
char scoreToGrade(int score);

int main(void)
{
	// Local Declarations
	int score;
	char grade;

	// Statements
	printf("Enter the test score (0-100): ");
	scanf("%d", &score);

	grade = scoreToGrade(score);
	printf("The grade is: %c\n", grade);

	return 0;
} // main 

char scoreToGrade(int score)
{
	// Local Declarations
	char grade;
	int temp;

	// Statements
	temp = score / 10;
	switch(temp)
	{
		case 10:
		case 9: grade = 'A';
						break;
		case 8: grade = 'B';
						break;
		case 7: grade = 'C';
						break;
		case 6: grade = 'D';
						break;
		default: grade = 'F';
	} // switch

	return grade;
} // scoreToGrade














