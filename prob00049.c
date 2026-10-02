//Basic for
// Statement: Print all even numbers from 1 to N.

#include <stdio.h>

int main()
{
	printf("Enter value of n : ");
	int n;
	scanf("%d", &n);

	int i;
	for (i = 2;i <= n;i += 2)
	{
		printf("%d ", i);
	}

	return 0;
}

// Optimisation Analysis : 
// Incrementing by 2 (i += 2) 
// executes the loop body exactly N/2 times instead of N times, 
// eliminating unnecessary odd - number checks and branch mispredictions.
// Time Complexity : O(N)