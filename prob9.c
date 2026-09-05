//GIVEN 2 INTEGERS X AND Y
//FIND THE SMALLEST NUMBER THAT
//MUST BE SUBTRACTED FROM X SO THAT
//RESULTING NUMBER IS EXACTLY DIVISIBLE BY Y

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