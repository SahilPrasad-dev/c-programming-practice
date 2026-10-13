// The Butterfly Pattern
// 
// Problem Description
// Write a C program that takes an integer N as input and prints a Butterfly Pattern of 2N rows using asterisks(*).
// The pattern consists of an upper half where the wings open up and a lower half where the wings close down,
// separated by spaces in the middle.
// 
// Input Format
// A single integer N representing the size of one half of the butterfly(where N >= 2).
// Output Format
// Print the butterfly pattern with stars and spaces.
// 
// Sample Test Case
// Input : 4
// Output : *      *     
//          **    **
//          ***  ***
//          ********
//          ********
//          ***  ***
//          **    **
//          *      *

#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the butterfly (N): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input! N must be >= 2.\n");
        return 1;
    }

    printf("\n--- The Butterfly Pattern ---\n");

    // 1. Upper Half of the Butterfly
    for (int i = 1; i <= n; i++) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 2. Lower Half of the Butterfly
    for (int i = n; i >= 1; i--) {
        // Print left wing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Print middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        // Print right wing stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}