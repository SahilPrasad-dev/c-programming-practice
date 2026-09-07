//SUM OF N NATURAL NUMBERS

# include <stdio.h>

int main()
{
	printf("Enter the n value upto which sum of natural number is needed = ");
	int n;
	scanf("%d", &n);

	int sum;
	sum = (n * (n + 1)) / 2;

	printf("Sum of first n natural numbers = %d", sum);

	return 0;
}