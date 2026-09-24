// Leap Year Determination
// Context : A calendar module needs to adjust February's day count based on standard astronomical rules.
// Task: Given a year Y, determine if it is a Leap Year using nested if conditions:
// A year is a leap year if divisible by 4.
// However, if it is divisible by 100, it must also be divisible by 400 to be a leap year.
// Input Format: A single integer Y.
// Output Format: Print Leap Year or Not a Leap Year

#include <stdio.h>

int main()
{
	printf("Enter the Year : ");
	int y;
	scanf("%d", &y);

	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
				printf("Leap Year");
			else
				printf("Not a Leap Year");
		}
		else
			printf("Leap Year");
	}
	else
		printf("Not a Leap Year");

	return 0;
}