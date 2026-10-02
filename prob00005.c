// ASCII Conversion 
// A university is developing a simple student coding lab tool 
// where students can learn about how computers store characters using ASCII values.
// The system should take an integer input(representing the ASCII code of a character) and 
// display its corresponding alphabet.
// For example : 
// ● Input : 65 → Output : A 
// ● Input : 97 → Output : a 
// Write a C program that reads two ASCII values(integers) from the user and prints their corresponding characters.

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