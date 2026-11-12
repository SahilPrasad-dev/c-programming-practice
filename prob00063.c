// Pascal's Triangle

// Problem Description
    // Write a C program that takes an integer N as input and prints Pascal's Triangle 
    // of height N.
    // In Pascal's triangle, 
    // the boundary elements are always 1, 
    // and every internal element is the sum of the two numbers directly above it. 
    // Each row should be properly centered for alignment.

// Input Format
    // A single integer N representing the number of rows of Pascal's Triangle 
    // (where 1 <= N <= 10).
// Output Format
    // Print the formatted Pascal's Triangle.

// Sample Test Case
    // Input:5
    // Output:          
//    1    
//   1 1   
//  1 2 1  
// 1 3 3 1 
//1 4 6 4 1


#include <stdio.h>

int main() 
{
    int n;

    printf("Enter number of rows (N): ");
    scanf("%d", &n);

    // Outer loop: Rows (0 se n-1 tak)
    for (int i = 0; i < n; i++) {
        
        // 1. Spacing Loop: Last row mein 0 spaces, upar har row mein 1-1 space badhegi
        for (int space = 0; space < n - i - 1; space++) {
            printf(" "); // Sirf 1 single space
        }

        // 2. Numbers Loop: Har row ka pehla number 1 hota hai
        int val = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", val); // Number ke sath 1 single space
            
            // Agla number nikalne ka formula (Next = Current * (i - j) / (j + 1))

            // PATTERN SAMJO (HAR NEST ELEM NCE FORM KA H(nc0,nc1,nc2....ncn))
            // do consecutive ncr ko divide krke ye formula mila
            val = val * (i - j) / (j + 1);
        }
        // to come to next line
        printf("\n");
    }

    return 0;
}