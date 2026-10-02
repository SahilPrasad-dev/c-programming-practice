// Next Multiple of 10 
// A cashier in a supermarket wants to round up the bill amount to the 
// nearest multiple of 10 for easier cash handling.
// Given a number N(the bill amount), find the next multiple of 10 greater than or equal to N.

#include <stdio.h>
#include <math.h>

int main()
{
	float n;

	printf("Enter the bill amount = ");
	scanf("%f", &n);
	
	int next_multiple = (int)(ceil(n / 10.0) * 10);
	// ceil round up to the next int

	printf("Next multiple of 10 = %d", next_multiple);

	return 0;
}