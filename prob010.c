// Temperature Conversion  
// Ramesh is working as a weather reporter.
// Every day, he receive temperature readings from different weather stations.
// However, some stations send temperatures in Celsius(°C) while others send them in Fahrenheit(°F).
// The conversions are as follows : 
// Celsius to Fahrenheit : F = (C×1.8) + 32  
// Fahrenheit to Celsius : C = (F−32)/1.8

#include <stdio.h>

int main()
{
	int choice;
	double temp, result;
	
	//read choice 1,2 and temp
	printf("Enter 1 for conversion from celsius to fahrenheit\n");
	printf("Enter 2 for conversion from fahrenheit to celsius\n");
	printf("Enter temprature value to convert");
	if (scanf("%d %lf", &choice, &temp) != 2)
		return 1;

	if (choice == 1)
	{
		//celsius to fahrenheit
		result = (temp * 1.8) + 32.0;
		printf("given celsius temp converted to fahrenheit = %.2f\n", result);
	}
	else if (choice == 2)
	{
		//fahrenheit to celsius
		result = (temp - 32.0) / 1.8;
		printf("given fahrenheit temp converted to celsius = %.2f\n", result);
	}
	else
		return 1;

	return 0;
}