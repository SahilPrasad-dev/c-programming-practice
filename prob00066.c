// Hollow Diamond with Inner Cross (+)
// Problem Description
// Write a C program that takes an odd integer N (N >= 5) as input
// and prints a Hollow Diamond of size N * N containing an Inner Cross (+) 
// that connects the top-to-bottom and left-to-right vertices of the diamond.
// Input Format
// A single odd integer N (where N >= 5).
// Output Format
// Print the N * N grid using *  (asterisk followed by a space) 
// for pattern points and    (two spaces) for empty areas so 
// the diamond looks like a true square.
// Sample Test Case
// Input:    9
// Output:   
//           * 
//         * * * 
//       *   *   * 
//     *     *     * 
//   * * * * * * * * * 
//     *     *     * 
//       *   *   * 
//         * * * 
//           *

# include <stdio.h>
# include <stdlib.h>

int main()
{
    // size of diamond
    int n;
    printf("Enter size of N (odd and >=5) : ");
    scanf("%d",&n);

    // for rows
    int mid = n/2;
    for(int i=0;i<n;i++)
    {
        // for columns
        for(int j=0;j<n;j++)
        {
            int dist = abs(mid-i)+abs(mid-j);
            if( i==mid || j==mid || dist==mid)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        // new line after each row
        printf("\n");
    }

    return 0;
}