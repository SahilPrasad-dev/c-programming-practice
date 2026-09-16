// Area and Perimeter of a Rectangular Field 
// A farmer wants to calculate the area and perimeter of his rectangular field 
// so that he can estimate how much seed and fertilizer are required.
// You are given the length(L) and breadth(B) of the field.
// Compute the area and perimeter.

#include <stdio.h>

int main()
{
	printf("Enter the length and breadth of the field : ");
	float l, b;
	scanf("%f %f", &l, &b);

	printf("Area of field = %.2f\n", l * b);
	printf("Perimeter of field = %.2f\n", 2*(l + b));

	return 0;
}