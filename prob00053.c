// Fibonacci Serier by for
// Statement: Generate the first N terms of the Fibonacci sequence(0, 1, 1, 2, 3, 5, 8,....)

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms in fibonacci series : ");
    scanf("%d", &n);

    long long a = 0, b = 1;

    if (n >= 1) printf("%lld ", a);
    if (n >= 2) printf("%lld ", b);

    for (int i = 3; i <= n; i++) 
    {
        long long next = a + b;
        printf("%lld ", next);
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}