// Grading System
// Context : An academic portal converts numerical marks into letter grades according to university guidelines.
// Task : Given an integer M, assign grades using an 
// if - else ladder : 
// M > 90    : Grade A
// 80< M < 90: Grade B
// 70< M < 80: Grade C
// 60< M < 70: Grade D
// M < 60    : Grade F

#include <stdio.h>

int main() 
{
    int marks;
    printf("Enter marks = ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    }
    else if (marks >= 80) {
        printf("Grade: B\n");
    }
    else if (marks >= 70) {
        printf("Grade: C\n");
    }
    else if (marks >= 60) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    return 0;
}