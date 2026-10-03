//factorial by for
// Statement: Calculate the factorial of a number N.

#include <stdio.h>

int main() {
    printf("Enter value of N for which factorial is needed : ");
    long long unsigned n;       // max fact u can calc is 20!  above that will cause overflow
                                // for more big factorial u need array based approach
    scanf("%llu", &n);
    unsigned long long factorial = 1;

    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);
    return 0;
}

// Optimisation Analysis : 
// Starts loop from 2(skipping multiplication by 1) to save one operation cycle.
// Uses unsigned long long to prevent immediate integer overflow up to 20!.
// Time Complexity : O(N)