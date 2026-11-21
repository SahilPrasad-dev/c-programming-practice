// DMA (malloc)

# include <stdio.h>
// this has definition of malloc,calloc etc....
# include <stdlib.h>

int main()
{
    printf("Enter the number of elements to store : ");
	int n;
	scanf("%d",&n);
	
	// allocate memory dynamically
	// and store the first address of it 
	// in a integer pointer
	
	// we did type casting because, 
	// malloc returns a void pointer
	
	// malloc allocates 
	// a big memory set based on size and datatype
	int * p = (int *)malloc(n*sizeof(int));
	
	// now take the values to store
    printf("Enter those values : ");
	for(int i=0;i<n;i++)
		scanf("%d",(p+i));
	
	// print the array elements
    printf("The values u Entered : ");
	for(int i=0;i<n;i++)
		printf("%d ",*(p+i));
	
	printf("\n");
	
	return 0;
}