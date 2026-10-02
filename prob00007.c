// Gross Salary Calculation 
// Raji is working as an HR executive in a company.
// Every month, she need to prepare the salary slips for employees.
// The salary of an employee is not just the basic salary, 
// but also includes additional allowances like 
// House Rent Allowance(HRA) and Dearness Allowance(DA), which depend on the basic salary.
// Now calculate the gross salary  
// Basic Salary : The base amount of the employee's salary. 
// Dearness Allowance (DA): An allowance given to employees to mitigate the impact of inflation. 
// House Rent Allowance (HRA): An allowance provided for housing expenses.
// Additionally, the Provident Fund (PF) is calculated as 10% of the Basic Salary.

#include <stdio.h>

int main()
{
	float bs;     //Basis Salary
	float hra;    //Home Rent Allowance 
	float da;     //Dearness Allowance
	float pf;     //Provident Fund

	printf("Enter basic salary = ");
	scanf("%f", &bs);
	printf("Enter home rent allowance = ");
	scanf("%f", &hra);
	printf("Enter dearness allowance = ");
	scanf("%f", &da);

	pf = (float)((bs * 10) / 100);

	printf("Gross Salary = %.2f", (float)(bs + hra + da + pf));
	
	return 0;
}