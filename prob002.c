//FORMATTED STUDENT RESULT SHEET

#include <stdio.h>

int main()
{
	int r1, m1;
	int r2, m2;
	int r3, m3;

	scanf("%d %d %d %d %d %d", &r1, &m1, &r2, &m2, &r3, &m3);
	printf("Roll	Marks\n");
	printf("%-7d %-5d\n", r1, m1);
	printf("%-7d %-5d\n", r2, m2);
	printf("%-7d %-5d\n", r3, m3);

	return 0;
}