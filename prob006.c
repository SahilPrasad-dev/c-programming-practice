//AREA AND PERIMETER OF CIRCLE

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