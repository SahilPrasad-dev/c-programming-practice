# include <stdio.h>

int recursiveFact(int n);

int main()
{
    // take input of num of which fact is to be found
    int n;
    printf("Enter value of N to find it's factorial : ");
    scanf("%d",&n);
    
    // print the rev no. by recursive funcn
    printf("Factorial of %d = %d\n",n,recursiveFact(n));
    
    return 0;
}

int recursiveFact(int n)
{
    int fact;
    if(n==1||n==0)
    {
        // base case
        return 1;
    }
    else
    {
        // recursive step
        fact = n*recursiveFact(n-1);
    }
    
    return fact;
}