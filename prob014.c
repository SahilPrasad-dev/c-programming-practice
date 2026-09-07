//Triangle Angle Calculator
// You are given two angles of a triangle.
// Your task is to write a C program to calculate the third angle of the triangle.

# include <stdio.h>

int main()
{
	//taking input of 2 known angles
	double a, b;
	printf("Enter values of 2 known angles of the triangle = ");
	scanf("%lf %lf", &a, &b);

	//calculating 3rd angle
	double c;
	c = 180.0 - (a + b);  // as sum of all angles = 180

	if (c > 0 && c < 180)
		printf("Unknown angle = %.2f\n", c);
	else
		printf("Triangle do not exist\n");

	return 0;
}