// Swapping of Two Bags 
// Two friends accidentally exchanged their bags.
// To correct the mistake, they decide to swap their bags back.
// Given two integers A and B representing the bag numbers, 
// swap their values using operators(without using a third variable) and display the result.

#include <stdio.h>

int main()
{
	int bag1, bag2;      // bag numbers

	//taking input
	printf("Enter numbers of bag1 and bag2 = ");
	scanf("%d %d", &bag1, &bag2);

	printf("Before exchange bag1 = %d, bag2 = %d\n", bag1, bag2);

	//inter changing logic ( without third variable )
	bag2 = bag1 + bag2;
	bag1 = bag2 - bag1;
	bag2 = bag2 - bag1;

	//displaying output
	printf("After exchange  bag1 = %d, bag2 = %d\n", bag1, bag2);

	return 0;
}