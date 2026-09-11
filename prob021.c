// Odd or Even Token 
// At an amusement park, tickets are issued based on whether the visitor’s token number is odd or even: 
// ● If the token number is even, the visitor is sent to Counter A.
// ● If the token number is odd, the visitor is sent to Counter B.
// Given a number N(the token number), determine whether it is Odd or Even using the ternary operator.

#include <stdio.h>

int main() {
    int N;
    printf("Enter token number = ");
    if (scanf("%d", &N) == 1) {
        // Using ternary operator to check if N is even or odd
        (N % 2 == 0) ? printf("Go to counter A\n") : printf("Go to counter B\n");
                       // for even condition         // for odd condition
    }
    return 0;
}