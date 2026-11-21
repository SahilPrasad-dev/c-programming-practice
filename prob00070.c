// DMA (calloc)

# include <stdio.h>
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
	// calloc returns a void pointer
	
	// calloc allocates memory in 
	// number of chunks according to the datatype
	int * p = (int *)calloc(n,sizeof(int));

	
	// now take the values to store
    printf("Enter those values : ");
	for(int i=0;i<n;i++)
		scanf("%d",(p+i));
	
	// print the array elements in reverse order
    printf("The values u Entered in reverse order : ");
	for(int i=n-1;i>=0;i--)
		printf("%d ",*(p+i));
	
	printf("\n");
	
	return 0;
}
