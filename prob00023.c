// Total Bill Calculation
// A shop sells items at a fixed price P each.
// A customer purchases Q items.
// The shopkeeper needs to calculate the total bill amount for the customer.

#include <stdio.h>

int main()
{
	float price;    // price per item is P
	int quantity;   // number of items perchased ( Q )

	//inputs
	printf("Enter price per item(P) = ");
	scanf("%f", &price);

	printf("Enter number of items perchased(Q) = ");
	scanf("%d", &quantity);

	//calculating total bill amount
	float totalBill = price * quantity;

	//displaying output
	printf("Total bill amount = %.2f\n", totalBill);

	return 0;
}