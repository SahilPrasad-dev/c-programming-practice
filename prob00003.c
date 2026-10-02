// Electricity Bill  
// A billing system in a shopping mall needs to calculate different results from two given values : 
// ● The total bill amount after combining two sections(Addition).
// ● The difference in sales between two counters(Subtraction).
// ● The combined revenue if sales are multiplied(Multiplication).
// ● The ratio of sales between the two counters(Division).
// Given two integers, perform these four calculations and display the results.

# include <stdio.h>

int main()
{
	printf("enter sales of 2 stores");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("total bill amount:%d\n", a + b);
	printf("difference:%d\n", a - b);
	printf("combined revenue:%d\n", a * b);
	if (b!=0)
		printf("ratio:%.2f\n", (double)a / b);

	return 0;

}