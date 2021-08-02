/* This calculates the area and circumference 
	of circle using PI as a defined constant.
	Written by: 
	Date:
*/

#include <stdio.h> 
#define PI 3.1416

int main(void){
	// Local Declaration
	float circ;
	float area;
	float radius;

	//statements 
	printf("\nPlease enter the value of the radius: "); 
	scanf("%f", &radius);
	circ = 2 * PI *radius;
	area = PI * radius * radius;

	printf("\nRadius is : %10.2f", radius); 
	printf("\nCircumference is : %10.2f", circ); 
	printf("\nArea is : %10.2f", area); 

	return 0;
}
