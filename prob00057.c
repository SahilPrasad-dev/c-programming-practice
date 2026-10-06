// Statement: Menu - Driven Calculator(Add, Subtract, Multiply)  (do while) 
// that keeps executing until the user selects the Exit option(4).

#include <stdio.h>

int main() 
{
    int choice;
    double a, b;
    do 
    {
        printf("\n--- MENU ---\n1. Add\n2. Subtract\n3. Multiply\n4. Exit\n");
        printf("Enter choice = ");
        scanf("%d", &choice);
        if (choice != 4) 
        {
            printf("Enter two operands : ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) 
        {
            case 1: printf("Result: %.2f\n", a + b); break;
            case 2: printf("Result: %.2f\n", a - b); break;
            case 3: printf("Result: %.2f\n", a * b); break;
            case 4: printf("Exiting Program...\n"); break;
            default: printf("Invalid Choice!\n");
        }
    } while (choice != 4);

    return 0;
}