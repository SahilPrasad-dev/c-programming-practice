// Employee Bonus Calculation 
// A company provides a special scheme to its employees : 
// ● If an employee’s salary is divisible by 5, they receive a 10 % bonus.
// ● Otherwise, they do not receive any bonus.
// Given an employee’s current salary, calculate and print the adjusted salary after applying the bonus.

#include <stdio.h>
#include <math.h>

int main()
{
    float salary;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    // Check if the floating-point salary is divisible by 5
    if (fmod(salary, 5.0) == 0.0)      // fmod() is used to fine remainder by using 2 float numbers
    {
        salary = salary + (0.10 * salary); // Apply 10% bonus
    }

    printf("Adjusted salary: %.2f\n",salary);

    return 0;
}