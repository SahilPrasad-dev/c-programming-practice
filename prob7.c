//GROSS SALARY CALCULATION

//take inputs for basic salary, HRA, DA
//Calculate PF also as 10% of basic salary
//Add all and give the output

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