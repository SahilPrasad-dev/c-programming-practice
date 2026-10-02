// Absolute Value Finder
// Context : An embedded sensor module tracks distance drift.
// Physical distances cannot be negative, so negative readings must be corrected to their absolute magnitude.
// Task : Read an integer N.
// If the number is negative, convert it to its positive counterpart using a simple if condition; 
// otherwise, keep it as it is.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter the distance = ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Distance = %d", abs(n));
	}
	else
	{
		printf("Distance = %d", n);
	}

	return 0;
}