// Test Score Evaluation
// Alice and Bob appeared for the same test.
// Their teacher wants to quickly compare their marks : 
// ● Print 1 if Alice scored more.
// ● Print 2 if Bob scored more.
// ● Print 0 if both scored the same.

#include <stdio.h>

int main()
{
	printf("Enter marks of Alice and Bob = ");
	float a; // marks of alice
	float b; // marks of 
	scanf("%f %f", &a, &b);

	(a > b)?printf("1- Alice scored more\n"):(a == b)?printf("0-Both scored equal"):printf("2-Bob scored more");
	
	return 0;
}