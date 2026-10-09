// The Cyber Vault (Prime Factorization in O(sqrt{ N })
// 
// Problem Description
// You are a cybersecurity analyst tasked with cracking an enemy server's encrypted passcode 
// represented by a large integer N. To generate the master key, you need to extract all the Prime Factors of N.
// A naive approach of iterating from 1 to N will result in a time limit exceeded error O(N).
// Your goal is to implement an optimized algorithm that finds all prime factors in O(sqrt{N}) time complexity 
// by leveraging factor pairing.
// Core Mathematical Insight (O(sqrt{N}) 
// Optimization
// Factors always exist in pairs. 
// For example, if N = 36
// 1 * 36 = 36
// 2 * 18 = 36
// 3 * 12 = 36
// 4 * 9  = 36
// 6 * 6  = 36 
// (sqrt{36} = 6)
// Once you cross the square root sqrt{N}, the factors simply repeat in reverse order. 
// Therefore, checking divisors up to 
// i * i <= N 
// is sufficient to find all prime factors efficiently.
// Input & Output Format
// Input Format: A single integer N (2 <= N <= 10^9).
// Output Format: All prime factors of N printed in ascending order.

#include <stdio.h>

int main() {
    long long n;
    printf("Enter the passcode : ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Prime Factors: ");

    // Step 1: 2 se tab tak divide karo jab tak ho sake
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }

    // Step 2: Odd numbers se check karo up to sqrt(n) (yani i * i <= n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%lld ", i);
            n /= i;
        }
    }

    // Step 3: Agar last mein koi bada prime number bach gaya ho
    if (n > 2) {
        printf("%lld ", n);
    }

    printf("\n");
    return 0;
}