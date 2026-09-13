// Age Difference 
// Two friends are comparing their ages.
// They want to know the absolute difference in their ages
// (the difference should always be positive regardless of who is older).

#include <stdio.h>
#include <stdlib.h> //to use abs()      // standard library
                                        // funcns: malloc, calloc, realloc, free
                                        // abs()- mod funcn, labs()- mod for long int
int main()
{
    int age1, age2;
    
    // taking ages input
    printf("Enter age of first person = ");
    scanf("%d", &age1);
    printf("Enter age of second person = ");
    scanf("%d", &age2);

    //calculating the abosulte difference
    int diff = abs(age1 - age2);

    //displaying result
    printf("The absolute difference in their age = %d\n", diff);

    return 0;
}