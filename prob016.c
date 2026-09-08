// swapping numbers by temp variable

# include <stdio.h>

int main()
{
	printf("enter value for variables a, b = ");
	int a, b;
	scanf("%d %d", &a, &b);

	printf("befor: a = %d and b = %d \n", a, b);

	//temp variable logic

	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("now: a = %d and b = %d \n", a, b);
	return 0;
}