// The Cryptographic Key Generator (Fast Exponentiation)
// 
// The Story Behind the Problem
// Imagine you are working as a Junior Security Engineer at a high - security cyber defense firm.
// Your team is building a secure messaging protocol (like WhatsApp or Signal) 
// that relies on RSA Cryptography to encrypt confidential messages before sending them over the internet.
// During key generation, the algorithm needs to compute huge exponential equations of the form : 
// A = (a ^ b)mod(m)
// Where : a is the secret base message ID.
// b is the massive public encryption key.
// m is the prime cryptographic modulus (used to keep numbers within fixed limits and prevent data leakages).
// 
// The Crisis : 
// Your teammate wrote a simple for loop to multiply a by itself b times
// (for (int i = 0; i < b; i++)).
// When tested with a small key(b = 10), it worked fine.But,
// when the production server was hit with a real cryptographic key where b = 1, 000, 000, 000(10 ^ 9),
// the server froze, timed out, and crashed!Furthermore, 
// computing a^ b directly caused a massive Integer Overflow, destroying the secret keys.
// 
// Your Mission : 
// Rewrite the key - generation engine using Binary Exponentiation with Modular Arithmetic.
// Your algorithm must compute (a^ b)mod(m) in O(log b) time complexity 
// (around 30 operations instead of 1, 000, 000, 000) 
// using a single while loop, preventing both time - outs and integer overflows.
// 
// Input & Output Format Specifications
// Input Format : A single line containing three space - separated integers : a  b  m
// a : Base integer(1 < a < 10 ^ 9)
// b : Exponent / Power(0 < b < 10 ^ 9)
// m : Modulus integer(1 < m < 10 ^ 9)
// Output Format : Print the modular exponentiation result in a structured key - generation card

#include <stdio.h>

int main() {
    long long a, b, m;

    printf("Enter base (a), exponent (b), and modulus (m): ");
    if (scanf("%lld %lld %lld", &a, &b, &m) != 3 || m <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    long long original_a = a;
    long long original_b = b;

    long long ans = 1;

    // Base ko modulo m limit mein rukhne ke liye
    a = a % m;

    // Bitwise Binary Exponentiation Loop - O(log b)
    while (b > 0) {
        // Step 1: Check if the Lowest Bit (LSB) is 1
        // (b & 1) is equivalent to (b % 2 != 0)
        if (b & 1) {
            ans = (ans * a) % m;
        }

        // Step 2: Base ko square karo (a^1 -> a^2 -> a^4 -> a^8)
        a = (a * a) % m;

        // Step 3: Bitwise Right Shift by 1 bit (Equivalent to b = b / 2)
        // Highest bit to lowest bit move karne ke liye
        b = b >> 1; //b ki value har bar aadhi hoti jari h
    }

    // Clean Terminal Output Format
    printf("\n========================================\n");
    printf("    CRYPTOGRAPHIC KEY GENERATOR (BITWISE)\n");
    printf("========================================\n");
    printf("Base (a)        : %lld\n", original_a);
    printf("Exponent (b)    : %lld\n", original_b);
    printf("Modulus (m)     : %lld\n", m);
    printf("----------------------------------------\n");
    printf("Calculated Key  : %lld\n", ans);
    printf("Time Complexity : O(log b)\n");
    printf("========================================\n");

    return 0;
}