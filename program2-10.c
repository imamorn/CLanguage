/* Demonstrate complex number arithmetic
2 Written by:
3 Date
4 */

#include <stdio.h>
#include <math.h>
#include <complex.h> 

int main(void){

	// Local Declarations 
	double complex x = 3 + 4 * I;
	double complex y = 3 - 4 * I; 
	double complex sum; 
	double complex dif;
	double complex mul;
	double complex div;

	// statements 
	sum = x+y; 
	dif = x-y; 
	mul = x*y; 
	div = x/y;

	printf("%f %f %f %f\n", creal(sum), cimag(sum), cabs(sum), carg(sum)); 
	printf("%f %f %f %f\n", creal(dif), cimag(dif), cabs(dif), carg(dif)); 
	printf("%f %f %f %f\n", creal(mul), cimag(mul), cabs(mul), carg(mul)); 
	printf("%f %f %f %f\n", creal(div), cimag(div), cabs(div), carg(div));
	
	return 0;
} // main
