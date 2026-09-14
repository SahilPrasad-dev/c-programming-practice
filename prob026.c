// Minimum Travel Time
// Two friends compare their travel times(in minutes) to reach college.
// Their times are given as integers A and B.
// They want to know who took less time.
// Since the computer system has restrictions, 
// the result should be calculated using operators only(no conditional statements allowed).

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// taking time in minutes as input
	int t1, t2;
	printf("Enter the time in minutes of 2 friends = ");
	scanf("%d %d", &t1, &t2);

	// lowest number logic (with operators only) (using ternary operator)
	int min1 = (t1 < t2) ? t1 : t2;
	printf("lowest time using ternary operator = %d minutes\n", min1);

	// lowest number logic (pure operator math logic)
	// this exp will return min of t1 or t2
	int min2 = (t1 + t2 - abs(t1 - t2)) / 2;
	//same formula as max, just negative before mode for min value
	printf("lowest time using mathematical operators only = %d minutes\n", min2);

	return 0;
}