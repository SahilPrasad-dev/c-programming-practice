// Test Score Evaluation 
// Alice and Bob appeared for the same test.
// Their teacher wants to quickly compare their marks : 
// ● Print 1 if Alice scored more.
// ● Print 2 if Bob scored more.
// ● Print 0 if both scored the same.

#include <stdio.h>

int main()
{
	printf("Enter marks of Alice = ");
	float ma; // marks of alice
	scanf("%f", &ma);

	printf("Enter marks of Bob = ");
	float mb; // marks of bob
	scanf("%f", &mb);

	if (ma > mb)
		printf(" 1 \n");
	else if (ma < mb)
		printf(" 2 \n");
	else
		printf(" 0 \n");

	return 0;
}