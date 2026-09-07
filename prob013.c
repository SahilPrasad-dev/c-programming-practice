//SIMPLE INTEREST CALCULATION
//Given the principal amount (P), time period (T) in years, 
//and rate of interest (R) per annum, 
//your task is to calculate the simple interest and Compound Interest.

# include <stdio.h>

//user defined power function
double power(double base, int exp)
{
	double result = 1.0;
	for (int i = 1;i <= exp;i++)
	{
		result *= base;
	}
	return result;
}

int main()
{
	double p, t, r;  // p-principal  t-time period  r-rate of interest PA
	printf("enter principal amount, time period, rate per annum = ");
	scanf("%lf %lf %lf", &p, &t, &r);

	//simple interest calculation
	double si = (p * t * r) / 100;

	//compound interest calculation
	double ci = p * power(1.0 + (r / 100.0), t);

	//output formatted to 2 decimal places
	printf("Simple interest = %.2f\n", (float)si);
	printf("Compound interest = %.2f\n", (float)ci);

	return 0;
}