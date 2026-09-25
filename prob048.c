// Indian Income Tax Engine
// Write a C program to calculate annual income tax based on the chosen tax regime and gross income.
// Taxable Income : 
// Taxable Income = Gross Income - 50000(If Taxable Income is less than 0, set it to 0)
 
// Old Regime(Regime 1) :
// Up to ₹2.5L : 0%
// ₹2.5L to ₹5L : 5% of amount above ₹2.5L
// ₹5L to ₹10L : ₹12500 + 20% of amount above ₹5L
// Above ₹10L : ₹112500 + 30% of amount above ₹10L
// Rebate : If Taxable Income <= ₹5L , Base Tax = 0.
 
// New Regime(Regime 2) :
// Up to ₹3L : 0%
// ₹3L to ₹7L : 5% of amount above ₹3L
// ₹7L to ₹10L : ₹20000 + 10% of amount above ₹7L
// ₹10L to ₹12L : ₹50000 + 15% of amount above ₹10L
// ₹12L to ₹15L : ₹80000 + 20% of amount above ₹12L
// Above ₹15L : ₹140000 + 30% of amount above ₹15L
// Rebate : If Taxable Income <= ₹7L, Base Tax = 0.

// Cess & Validation:
// If Base Tax > 0,
//    add 4% Health& Education Cess :
//    Total Tax = Base Tax + Base Tax * 0.04
// 
// If Regime is not 1 or 2, print "Invalid Regime Selected".
// Input Format Two space - separated values : <Regime> <Gross_Income>
// Output Format Total Tax Payable : Rs. <amount> (formatted to two decimal places)

#include <stdio.h>

int main()
{
	printf("Enter 1 for Old Regime or 2 for New Regime, followed by Gross Income: ");
	int regime;
	float grossIncome;
	float taxableIncome;
	float tax = 0.0;

	if (scanf("%d %f", &regime, &grossIncome) != 2)
	{
		printf("Invalid input.\n");
		return 1;
	}

	switch (regime)
	{
	case 1:
	{
		// 1. Standard Deduction (Old Regime: ₹50,000)
		taxableIncome = grossIncome - 50000.0f;
		if (taxableIncome < 0) 
			taxableIncome = 0;

		// 2. Old Tax Regime Slabs
		if (taxableIncome <= 250000)
			tax = 0;
		else if (taxableIncome <= 500000)
			tax = 0.05f * (taxableIncome - 250000);
		else if (taxableIncome <= 1000000)
			tax = 12500 + 0.20f * (taxableIncome - 500000);
		else
			tax = 112500 + 0.30f * (taxableIncome - 1000000);

		// 3. Section 87A Rebate (Taxable Income up to 5 Lakhs -> Zero Tax)
		if (taxableIncome <= 500000)
			tax = 0;

		break;
	}
	case 2:
	{
		// 1. Standard Deduction (New Regime: ₹75,000)
		taxableIncome = grossIncome - 75000.0f;
		if (taxableIncome < 0) 
			taxableIncome = 0;

		// 2. New Tax Regime Slabs
		if (taxableIncome <= 300000)
			tax = 0;
		else if (taxableIncome <= 700000)
			tax = 0.05f * (taxableIncome - 300000);
		else if (taxableIncome <= 1000000)
			tax = 20000 + 0.10f * (taxableIncome - 700000);
		else if (taxableIncome <= 1200000)
			tax = 50000 + 0.15f * (taxableIncome - 1000000);
		else if (taxableIncome <= 1500000)
			tax = 80000 + 0.20f * (taxableIncome - 1200000);
		else
			tax = 140000 + 0.30f * (taxableIncome - 1500000);

		// 3. Section 87A Rebate (Taxable Income up to 7 Lakhs -> Zero Tax)
		if (taxableIncome <= 700000)
			tax = 0;

		break;
	}
	default:
		printf("Invalid regime selected! Please select 1 or 2.\n");
		return 1;
	}

	// 4. Add 4% Health and Education Cess on remaining tax liability
	if (tax > 0)
	{
		tax += tax * 0.04f;
	}

	printf("Taxable Income after Standard Deduction: Rs. %.2f\n", taxableIncome);
	printf("Total tax payable (including 4%% Cess): Rs. %.2f\n", tax);

	return 0;
}