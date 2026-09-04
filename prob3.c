//ELECTRICITY BILL ( ARITHMETIC OPERATIONS )

# include <stdio.h>

int main()
{
	printf("enter sales of 2 stores");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("total bill amount:%d\n", a + b);
	printf("difference:%d\n", a - b);
	printf("combined revenue:%d\n", a * b);
	if (b!=0)
		printf("ratio:%.2f\n", (double)a / b);

	return 0;

}