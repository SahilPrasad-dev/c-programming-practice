// Problem Statement: Copy Array Elements
// Given an array of integers, your task is to copy its elements into another array.

// Input Format
// The first line contains an integer n (1 ≤ n ≤ 100), the number of elements in the array.
// The second line contains n space-separated integers, which are the elements of the array.
// Output Format
// Print the elements of the copied array as space-separated integers on a single line.

# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n],b[n];

	for(int i=0;i<n;i++)        // inserting values in A
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)        // copying values of A to B
		b[i]=a[i];

	for(int i=0;i<n;i++)        // printing values of B
		printf("%d ",b[i]);
	
	return 0;
}