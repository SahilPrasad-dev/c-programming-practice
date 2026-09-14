// Smallest Number to Make Divisible(Subtraction)
// Given two integers x and y, 
// find the smallest number that must be subtracted from x so that the resulting number is exactly divisible by y.

#include <stdio.h>

int main()
{
	printf("Enter two integers ");
	int x, y;
	if (scanf("%d %d", &x, &y) != 2)
		return 1;

	int rem;
	rem = x % y;

	printf("Smallest number to subtract from %d to make it divisible by %d = %d\n", x, y, rem);

	return 0;
}