// Reversing Integer by while
// Statement: Reverse a given integer N( e.g. 1234 to 4321 )

#include <stdio.h>

int main() {
    printf("Enter an integer : ");
    long long n;
    scanf("%lld", &n);
    long long reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed Number: %lld\n", reversed);
    return 0;
}