// Basic (while)
// Statement: Count the total number of digits in a given positive integer N

#include <stdio.h>

int main()
{
	printf("Enter a number : ");
	int n;
	scanf("%d", &n);

	int i=0;
	if (n == 0)
	{
		printf("Number of digits = 1\n");
	}
	else
	{
		while (n != 0)
		{
			i += 1;
			n = n / 10;
		}
		printf("Number of digits = %d", i);
	}

	return 0;
}