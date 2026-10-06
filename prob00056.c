// calculate sum until user wants
// Statement: Calculate the sum of digits of a number until the user inputs 0 to terminate.

#include <stdio.h>

int main() 
{
    long long num;

    do 
    {
        printf("Enter a number (0 to exit): ");
        scanf("%lld", &num);

        if (num == 0) {
            break;
        }

        long long temp = num;
        int sum = 0;

        // Inner loop: digit sum calculation
        while (temp > 0) {
            sum += temp % 10; // Extract last digit
            temp /= 10;       // Remove last digit
        }

        printf("Digit sum of %lld is: %d\n", num, sum);

    } while (num != 0);

    printf("Exited successfully.\n");
    return 0;
}