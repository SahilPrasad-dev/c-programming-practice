// Equal Candy Distribution 
// Ravi has X candies and he wants to distribute them equally among Y kids.
// Help him find how many candies each kid gets and how many candies remain undistributed.

#include <stdio.h>

int main()
{
	printf("Enter number of candies = ");
	int c; // c for candy
	scanf("%d", &c);
	printf("Enter number of kids to distribute the %d candies = ",c);
	int k; // k for kids
	scanf("%d", &k);

	// calculating eql no. of candy given and remaining candy

	if (k != 0)
	{
		int rc; // remaining candy after distribution
		rc = (int)(c % k);
		int ec; // ec for equal no. of candy distribution
		ec = (int)(c / k);

		//showing the output

		printf("no. of candies distributed to each kid = %d\n", ec);
		printf("no. of candies remaining after distribution = %d\n", rc);
	}
	else
		printf("can't distribut candies to zero number of kids\n");

	return 0;
}