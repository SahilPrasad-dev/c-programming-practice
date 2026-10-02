// Area and Perimeter of a Circle 
// Given the radius of a circle, your task is to compute the area and perimeter of the circle.

#include <stdio.h>
#define pi 3.14   // defining a constant

int main()
{
	float r;
	printf("Enter value of radius ");
	scanf("%f", &r);

	printf("Area of circle = %.2f\n", (float)(pi * r * r));
	printf("Perimeter of circle = %.2f", (float)(2 * pi * r));

	return 0;
}