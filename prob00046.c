// Vowel, Consonant, or Special Character(switch + if)
// Context: A natural language processor parses input text stream tokens.
// Task : Given a single character C : 
// First, check if C is an alphabetic character using conditional statements.
// If it is an alphabet, convert / evaluate it through a switch - case block to check 
// if it is a Vowel(both upper and lowercase) or a Consonant.
// If it is not an alphabet, print Not an Alphabetic Character.
// Input Format : A single character C.
// Output Format : Print Vowel, Consonant, or Not an Alphabetic Character.

#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character : ");
	scanf("%c", &c);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		switch (c)
		{
		case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("Vowel\n");
			break;
		default:
			printf("Consonant\n");

		}
	}
	else
		printf("Not an Alphabetic Character\n");

	return 0;
}