//GIVEN 2 NUMBERS X AND Y
//FIND THE SMALLEST NUMBER THAT MUST BE ADDED TO X
//SO THAT THE RESULTING NUMBER IS EXACTLY DIVISIBLE BY Y

# include <stdio.h>

int main()
{
	int x;
	int y;

	printf("Enter two integers ");
	
	if (scanf("%d %d",&x, &y) != 2)        //putting scanf inside if
		return 1;                          //checks weather scanf successfully read the inputs
	                                       //before running the rest of code
	int rem = x % y;
	int ans;
	if (rem == 0)
		ans = 0;
	else
		ans = y - rem;

	printf("smalles int to add to %d to make it divisible by %d = %d\n", x, y, ans);

	return 0;
}