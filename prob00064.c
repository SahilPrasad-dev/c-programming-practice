// Write a program in C to print the first n terms of the Fibonacci sequence 
// using a recursive function. 
// The Fibonacci sequence is defined as follows:

// F(0)=1
// F(1)=1
// F(n)=F(n−1)+F(n−2)

// Your task is to implement a recursive function that computes 
// the Fibonacci sequence up to the n-th term and print each

// Input Format
// A single integer n (1 ≤ n ≤ 40) denoting the number of terms to be printed.

// Output Format
// Print the first n terms of the Fibonacci sequence seperated by space

#include <stdio.h>

int recursiveFibo(int n);

int main() 
{
    // Read the number of terms
    int n;
    printf("Enter number of terms in fibonacci series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", recursiveFibo(i));
        
    }
    printf("\n");
    
    return 0;
}

int recursiveFibo(int n) 
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return recursiveFibo(n - 1) + recursiveFibo(n - 2);
}