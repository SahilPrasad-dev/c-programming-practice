// Even or Odd using Bitwise Operators 
// At a parking lot, cars are assigned slots based on their token numbers : 
// ● If the token number is even, the car is parked in Lane A.
// ● If the token number is odd, the car is parked in Lane B.
// You are given an integer N, representing the token number.
// Determine whether it is Even or Odd using bitwise operators only.

#include <stdio.h>                    // logic: we will use last bit of n to analyse if its odd or even
                                      // if last bit is 1 its odd
                                      // if last bit is 0 its even
int main()
{
	int n;
	printf("Enter the token number = ");
	scanf("%d", &n);

	// check least significant bit using bitwise and
	if ((n & 1) == 0)
		printf("Token number is even, car is parked in lane A\n");                                        
	else
		printf("Token number is odd, car is parked in lane B\n");
	return 0;
}