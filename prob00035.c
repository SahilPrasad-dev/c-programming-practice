// Discount Eligibility
// Context : A campus bookstore offers 
// an instant discount of 15 % if a customer purchases books worth more than ₹500 in a single transaction.
// Task : Given a floating - point number A representing the bill amount,
// check if the customer is eligible for a discount.Print the final payable amount rounded to two decimal places.
#include <stdio.h>

int main()
{
	float bill;
	printf("Enter the bill amount = ");
	scanf("%f", &bill);

	float discount;
	if (bill > 500)
	{
		printf("Eligile for discount\n");
		printf("Total bill after discount = %.2f", (bill - 0.15 * bill));
	}
	else
	{
		printf("No discount\n");
		printf("total bill = .2f", bill);
	}

	return 0;
}