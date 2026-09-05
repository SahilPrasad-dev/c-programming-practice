//ASCII CONVERSION

#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter ASCII code of any two alphabet");
	scanf("%d %d", &a, &b);

	printf("ASCII    Character\n");
	printf("%-8d %c\n", a, (char)a);
	printf("%-8d %c\n", b, (char)b);

	return 0;
}