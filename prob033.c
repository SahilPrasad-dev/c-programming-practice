// Floating point to Integer 
// Conversion A mobile recharge app calculates the bill amount with decimal values(floating - point).
// However, when generating the final invoice, the amount must be shown as an integer(rounded down).
// Given a decimal number X(the bill amount), convert it into an integer using type conversion and print it.

#include <stdio.h>

int main()
{
	printf("Enter the bill amount = ");
	float bill;
	scanf("%f", &bill);

	printf("Your rounded off bill = %d", (int)bill );

	return 0;
}