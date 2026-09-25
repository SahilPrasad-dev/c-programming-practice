// Electricity Tariff Calculation
// Context : An electric utility service calculates residential power bills 
// based on tiered usage slabs and safety surcharges.
// Task : Given the total unit consumption U(integer), 
// calculate the total bill amount using an if - else ladder : 
// First 100 units            : ₹1.50/unit
// Next 100 units(101 to 200) : ₹2.50/unit
// Next 100 units(201 to 300) : ₹4.00/unit
// Above 300 units            : ₹6.00/unit
// A fixed service charge of ₹50 is added to every bill.
// If the calculated total exceeds ₹1000, an additional surcharge of 15 % is applied on the total bill amount.
// Input Format : A single integer U.
// Output Format : Print Total Bill : Rs. <amount> (rounded to 2 decimal places).

#include <stdio.h>

int main()
{
	printf("Enter the units consumed : ");
	int u;
	scanf("%d", &u);

	double bill = 0.0;

	if (u <= 100)
		bill += u * 1.50;
	else if (u <= 200)
		bill = (u - 100) * 2.50 + 100 * 1.50;
	else if (u <= 300)
		bill = (u - 200) * 4.00 + 100 * 2.50 + 100 * 1.50;
	else
		bill = (u - 300) * 6.00 + 100 * 4.00 + 100 * 2.50 + 100 * 1.50;
	// fixed charge
	bill = bill + 50;
	// if bill excedes 1000
	if (bill > 1000)
		bill = bill + 0.15 * bill;

	printf("Total Bill = Rs. %.2lf", bill);

	return 0;
}