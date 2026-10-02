// Bitwise Operations 
// In a digital electronics lab, students are learning how computers perform operations at the bit level.
// You are given two integers A and B.
// Perform the following bitwise operations and display the results : 
// 1. A & B(Bitwise AND) 
// 2. A | B(Bitwise OR) 
// 3. A ^ B(Bitwise XOR) 
// 4. ~A(Bitwise NOT of A) 
// 5. ~B(Bitwise NOT of B)

#include <stdio.h>

int main()
{
    int A, B;

    // inputting two integers A and B
    printf("Enter two integers A and B: ");
    scanf("%d %d", &A, &B);

    // 1. Bitwise AND
    printf("A & B (Bitwise AND) = %d\n", A & B);

    // 2. Bitwise OR
    printf("A | B (Bitwise OR) = %d\n", A | B);

    // 3. Bitwise XOR
    printf("A ^ B (Bitwise XOR) = %d\n", A ^ B);   // same inputs      ---> 0 output
                                                   // different inputs ---> 1 output
    // 4. Bitwise NOT of A
    printf("~A (Bitwise NOT of A) = %d\n", ~A);

    // 5. Bitwise NOT of B
    printf("~B (Bitwise NOT of B) = %d\n", ~B);

    return 0;
}

// inputs ko bitwise convert krke fir compare karega
// jo bits output ayenge usko wapas decimal me convert karega
// fir final output dega