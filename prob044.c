// Valid Triangle Checker
// Context : CAD modeling software verifies if three user - supplied segment lengths can physically construct 
// a valid non - degenerate triangle, and if so, determines its geometric type.
// Task : Given three positive side lengths a, b, and c : 
// Check if the triangle inequality theorem holds(a + b > c, a + c > b, and b + c > a).
// If valid, determine whether it is Equilateral, Isosceles, or Scalene.
// If invalid, print Invalid Triangle.
// Input Format : Three space - separated integers a, b, c.
// Output Format : Print the classification.

#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b > c && b + c > a && c + a > b)
	{
		if (a == b && b == c)
			printf("Equilateral\n");
		else if (a != b && b != c && c != a)
			printf("Scalene\n");
		else
			printf("Isosceles\n");
	}
	else
		printf("Invalid Triangle\n");

	return 0;
}