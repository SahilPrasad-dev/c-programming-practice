// Month Days Counter (switch - case)
// Context: A scheduling app calculates the number of days in a given month index.
// Task : Given an integer M(1 to 12) representing the month number,
// display the total number of days in that month(assume a non - leap year).
// Group matching months inside a switch statement to minimize redundant cases.
// Input Format : A single integer M.
// Output Format : Print Days : <count> or Invalid Month if M is out of range.

#include <stdio.h>

int main()
{
	printf("Enter the index of the month : ");
	int m;
	scanf("%d", &m);

	switch (m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("Days : 31\n");
			break;
		case 4: case 6: case 9: case 11:
			printf("Days : 30\n");
			break;
		case 2:
			printf("Days : 28\n");
			break;
		default:
			printf("Invalid Month");
	}

	return 0;
}