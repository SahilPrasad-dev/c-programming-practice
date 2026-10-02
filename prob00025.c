// Maximum of Two Scores
// Ram and Rahim appeared for an interview, and their scores are given as integers A and B.
// The HR team wants to know who scored higher.
// Since the system is restricted, the result should be calculated using operators only
// (no conditional statements allowed).

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// taking scores as input
	int s1, s2;
	printf("Enter the scores Ram and Rahim = ");
	scanf("%d %d", &s1, &s2);

	// highest number logic (with operators only) (using ternary operator)
	int max1 = (s1 > s2) ? s1 : s2;
	printf("highest score using ternary operator = %d\n", max1);

	// highest number logic (pure operator math logic)
	// this exp will return max of s1 or s2
	int max2 = (s1 + s2 + abs(s1 - s2)) / 2;
	printf("highest score using mathematical operators only = %d\n", max2);

	return 0;
}