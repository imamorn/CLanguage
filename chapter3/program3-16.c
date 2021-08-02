#include<stdio.h>

int main(void)
{
	int i;
	int j;
	int sum; 

	printf("Enter two integers and key <return>\n");
	scanf("%d%d", &i, &j);
	sum = i + j;
	printf("The sum of %d & %d is %d\n", i, j, sum);

	return 0;
} // main

