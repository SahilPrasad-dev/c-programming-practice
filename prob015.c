//Arithmetic Expression Calculator
// You are given three floating - point numbers : x, y, and z.
// Your task is to calculate and print the results of the following expressions :
// 1. (x + y + z) / (x - y - z) 
// 2. (x + y + z) / 3 
// 3. (x + y) * (x - y) * (y - z)

#include <stdio.h>

int main()
{
	// taking input for x,y,z
	double x, y, z;
	printf("Enter values of x, y, z to perform operations = ");
	scanf("%lf %lf %lf", &x, &y, &z);

	if (x - y - z != 0)
		printf("(x + y + z) / (x - y - z) = %.2f\n", (x + y + z) / (x - y - z));
	else
		printf("Division by zero\n");

	printf("(x + y + z) / 3 = %.2f\n", (x + y + z) / 3);
	printf("(x + y) * (x - y) * (y - z) = %.2f\n", (x + y) * (x - y) * (y - z));

	return 0;
}