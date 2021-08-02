/* Print report showing value of investment.
	Written by:
	Date:
*/

#include<stdio.h>

int main(void)
{
	// Local Declarations
	double presVal;
	double futureVal;
	double rate;
	int years;
	int looper;

	// statements
	printf("Enter value of investment:   ");
	scanf("%1f", &presVal);
	printf("Enter rate of return (nn.n):   ");
	scanf("%1f", &rate);
	printf("Enter number of years:   ");
	scanf("%d", &years);

	printf("\nYear Value\n");
	printf("====  ========\n");
	for (futureVal = presVal, looper = 1; looper <= years; looper++)
	{
		futureVal = futureVal * (1 + rate/100.0);
		printf("%3d%11.21f\n", looper, futureVal);
	} // for
	return 0;
} // main


