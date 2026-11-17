#include <stdio.h>

int recursiveGCD(int a,int b);
int gcdHelper(int a,int b,int,int);

int main()
{
    int a,b;
    printf("Enter value of a,b to find their gcd : ");
    scanf("%d %d", &a,&b);
    
    printf("GCD of %d and %d is = %d\n",a,b, recursiveGCD(a,b));
    
    return 0;
}

int recursiveGCD(int a,int b)
{
    // Start with an initial gcd value of 1, and i =1
    return gcdHelper(a,b,1,1);
}

int gcdHelper(int a,int b, int gcd, int i)
{
	int s=(a<b)?(a):(b);
	if(i<=s)
	{
		// actual recursions step
		if(a % i == 0 && b % i == 0)
		{
			gcd=i;
		}
		gcdHelper(a,b,gcd,++i);
	}
	else
		// returning final gcd value
		return gcd;
}