// Character Classifier
// Context : A compiler analyzes incoming tokens and classifies characters based on their ASCII ranges.
// Task : Read a single character C and print whether it is an 
// Uppercase Alphabet, Lowercase Alphabet, Digit, or Special Character.

#include <stdio.h>

int main() 
{
    printf("Enter the character : ");
    char ch;
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {       // comparing there ascii values
        printf("Uppercase Alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }

    return 0;
}