// Maximum of Three Numbers
// Context : An automated traffic system compares vehicles logged by 
// three different ultrasonic sensor stations(S_1, S_2, S_3) to find the peak count recorded.
// Task : Read three integers and determine the maximum value using if - else logic.

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter 3 integers = ");
	scanf("%d %d %d", &a, &b, &c);

	if (a != b && a != c && b != c)
	{
		if (a > b && a > c)
			printf("%d is largest", a);
		else if (b > c && b > a)
			printf("%d is largest", b);
		else
			printf("%d is largest", c);
	}
	else if (a == b && a != c && a > c)
		printf("%d, %d are largest", a, b);
	else if (a == c && a != b && a > b)
		printf("%d, %d are largest", a, c);
	else if (b == c && b != a && b > a)
		printf("%d, %d are largest", b, c);
	else
		printf("All are equal");

	return 0;
}