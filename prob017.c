// swapping numbers without temp variable

# include <stdio.h>

int main()
{
	printf("enter value for variables a, b = ");
	int a, b;
	scanf("%d %d", &a, &b);

	printf("befor: a = %d and b = %d \n", a, b);

	//using permanent variables (no temp veriable logic)

	a = a + b;
	b = a - b;
	a = a - b;

	printf("now: a = %d and b = %d \n", a, b);
	return 0;
}