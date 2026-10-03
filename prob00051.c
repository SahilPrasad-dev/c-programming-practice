// Basic (do - while)
// Statement: Prompt the user to enter a positive integer.
// Keep re - prompting until a valid positive integer( > 0) is entered.

#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive number (> 0): ");
        // Using sample input simulation logic if non-interactive, or standard scanf
        if (scanf("%d", &number) != 1) {
            // Clear invalid buffer input if needed
            while (getchar() != '\n')     // continunos loop until all buffer elem are read
            {
                ;   // empty statement ( do nothing)
            }
            number = -1;
            continue;   // jums directly to while condition without executing rest of loop statements
        }
    } while (number <= 0);

    printf("Valid input received: %d\n", number);
    return 0;
}