// Palindromic Number Pyramid 
// 
// Problem Description
// Write a C program that takes an integer N as input and prints a symmetrical Palindromic Number Pyramid of height N
// Each row i(ranging from 1 to N) should be properly centered with leading spaces, 
// followed by a sequence of numbers that increase from 1 up to i, and 
// then decrease symmetrically from i - 1 down to 1.
// Input Format 
// A single integer N representing the total height of the pyramid
// (where 1 <= N <= 9).
// Output Format
// Print the palindromic number pyramid with proper spacing.
// 
// Sample Test Case
// Input : 4
// Output :      1
//             1 2 1
//           1 2 3 2 1
//         1 2 3 4 3 2 1

#include <stdio.h>

int main() {
    int n;

    printf("Enter the height of the pyramid (N): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input! N must be >= 1.\n");
        return 1;
    }

    printf("\n--- Palindromic Number Pyramid ---\n");

    // Outer loop for each row from 1 to n
    for (int i = 1; i <= n; i++) {

        // Inner Loop 1: Print leading spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  "); // Two spaces for balance
        }

        // Inner Loop 2: Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Inner Loop 3: Print decreasing numbers from i - 1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        // Move to the next line after completing the row
        printf("\n");
    }

    return 0;
}