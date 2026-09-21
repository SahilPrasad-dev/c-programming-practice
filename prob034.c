// Pass/Fail Evaluation
// The examination branch evaluates student marks to determine 
// whether a student has passed a subject or needs a re - examination.
// Task: Given an integer M representing a student's marks out of 100, 
// print "Pass" if the marks are greater than or equal to 40. Otherwise, print "Fail"

#include <stdio.h>

int main()
{
	float m;

	do                                                // do while is used to restrict the user to enter
	{                                                 // value between 0 to 100
		printf("Enter marks (0-100) = ");
		scanf("%f", &m);

		if (m < 0 || m>100)
		{
			printf("Invalid Input! Please enter a valid value between 0 to 100\n");
		}
	} while (m < 0 || m>100);
	
	if (m >= 40)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}

	return 0;
}