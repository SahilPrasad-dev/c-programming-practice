// Concentric Number Matrix (Square Grid)
// Problem Description
// Write a C program that takes an integer N as input and 
// prints a Concentric Number Matrix of size (2N - 1) * (2N - 1). 
// The outermost boundary layer consists of the number N, 
// the next inner layer consists of N - 1, and so on, 
// decreasing by 1 per layer until the center element is 1.
// Input Format
// A single integer N representing the outermost layer value 
// (where 1 <= N <= 9).
// Output Format
// Print the (2N - 1) * (2N - 1) concentric number square grid 
// with single spaces between numbers.
// Sample Test Case
// Input:  3
// Output: 3 3 3 3 3 
//         3 2 2 2 3 
//         3 2 1 2 3 
//         3 2 2 2 3 
//         3 3 3 3 3 

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Total rows and columns
    int size = 2 * n - 1;

    printf("\n--- Concentric Number Matrix ---\n");

    // Outer loop for rows (0 to size - 1)
    for (int i = 0; i < size; i++) 
    {
        
        // Inner loop for columns (0 to size - 1)
        for (int j = 0; j < size; j++) 
        {
            
            // 1. Calculate distance from all 4 borders
            int top = i;
            int left = j;
            int bottom = (size - 1) - i;
            int right = (size - 1) - j;

            // 2. Find the minimum of the 4 distances
            int min_dist = top;
            if (left < min_dist) min_dist = left;
            if (bottom < min_dist) min_dist = bottom;
            if (right < min_dist) min_dist = right;

            // 3. Subtract minimum distance from N
            printf("%d ", n - min_dist);
        }
        // new line after each row
        printf("\n");
    }

    return 0;
}