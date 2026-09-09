// finding area and perimeter of a triangle

#include <stdio.h>
#include <math.h>

int main()
{
	printf(" enter 3 sides of the triangle = ");
	float a, b, c, x, y;
	scanf("%f %f %f", &a, &b, &c);

	x = (a + b + c) / 2.0;    //semi perimeter
	y = x*(x - a)*(x - b)*(x - c);

	if (a + b > c && b + c > a && c + a > b)
	{
		printf("perimeter of trianle is = %.2f\n", (a + b + c));
		printf("area of triangle is = %.2f\n", sqrt(x));
	}
	else
			printf("invalid sides of triangle\n");
}