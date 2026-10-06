// check palindrome by while
// Statement: Check whether a given integer N is a Palindrome(e.g., 12321 is a palindrome).

#include <stdio.h>

int main()
{
	printf("Enter the value of n : ");
	int n;
	scanf("%d", &n);

	int rev=0, temp, i;
	temp = n;

	while (n != 0)
	{
		rev = (rev*10) + (n % 10);
		n = n / 10;
	}
	if (rev == temp) printf("%d is palindrome\n", temp);
	else printf("%d is not palindrome\n", temp);

	return 0;
}