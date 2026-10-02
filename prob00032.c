// Half and Double of a Number 
// A teacher is preparing worksheets for her students.
// For a given number N : 
// ● She wants to divide it into two equal groups(integer division → half).
// ● She also wants to double it to check multiplication understanding.
// Given an integer N, print its half(integer division) and its double.

#include <stdio.h>

int main()
{
	printf("Enter value of n = ");
	int n;
	scanf("%d", &n);

	printf("Half = %d\n", n / 2);
	printf("Double = %d\n", n * 2);

	return 0;
}