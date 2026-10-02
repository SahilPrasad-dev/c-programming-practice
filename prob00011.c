// Find the Divisor 
// Given three integers x(dividend), y(quotient), and z(remainder), Your task is to find the divisor.

#include <stdio.h>

int main()
{
	printf("Enter dividend = ");
	int dividend;
	scanf("%d", &dividend);

	printf("Enter quotient = ");
	int quotient;
	scanf("%d", &quotient);

	printf("Enter remainder = ");
	int remainder;
	scanf("%d", &remainder);

	int divisor;
	divisor = (int)((dividend - remainder) / quotient);

	printf("Divisor = %d\n", divisor);

	return 0;
}