// DMA (realloc)

# include <stdio.h>
# include <stdlib.h>

int main()
{
    // take initial size as input
    printf("Enter the no. of elem u want to store : ");
    int n;
    scanf("%d",&n);
    
    // allocate memory for n elements
    int * arr = (int *)calloc(n,sizeof(int));
    
    // take input of values for n elements
    printf("Provide the values : ");
    for(int i=0;i<n;i++)
        scanf("%d",(arr+i));
        
    // take input as m to resize the memory
    printf("to increase the size give +ve integer give -ve to decrease the size : ");
    int m;
    scanf("%d",&m);
    
    // re allocate the array (arr)
    arr = (int *)realloc(arr,(n+m)*sizeof(int));

    // take input of m additional integers in arr
    printf("Enter Additional values : ");
    for(int i=n; i< n+m ; i++)
        scanf("%d",(arr+i));

    // now print the updated array
    printf("Updated Array : ");
    for(int i=0;i<(n+m);i++)
    printf("%d ",*(arr+i));
    
    // free the allocated memory after 
    // work is done with it
    free(arr);
    
    return 0;
}