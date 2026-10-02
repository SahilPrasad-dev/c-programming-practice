// Automated Teller Machine(ATM) Transaction Guard
// Context : An ATM software module handles withdrawal requests by applying 
// authentication checks, balance validation, and daily limit conditions.
// Task : The system takes three inputs : 
// Account Balance(float), Withdrawal Amount(integer, must be a multiple of 100), and Daily Limit Remaining(float).
// Implement the following rules using nested if :
// If Withdrawal Amount is not a multiple of 100, print "Invalid Amount: Must be a multiple of 100"
// If Withdrawal Amount exceeds Daily Limit Remaining, print "Transaction Denied: Exceeds Daily Limit".
// If Withdrawal Amount+Transaction Fee(₹25) exceeds Account Balance, print "Transaction Denied: Insufficient Balance".
// Otherwise, deduct(Amount+₹25) from Account Balance and print "Transaction Successful. 
// Remaining Balance: <balance>". 
// Input Format : Three space - separated values : Balance Amount Limit 
// Output Format : Print the exact result string.

#include <stdio.h>
#define TF 25  // transation fee

int main()
{
	float balance;
	int amount;
	float limit;

	printf("Enter Balance, Amount, Limit : ");
	scanf("%f %d %f", &balance, &amount, &limit);

	if (amount % 100 == 0)
	{
		if (amount > limit)
			printf("Transaction Denied: Exceeds Daily Limit\n");
		else if ((amount + TF) > balance)
			printf("Transaction Denied: Insufficient Balance\n");
		else
		{
			balance -= amount + TF;
			printf("Transaction Successful\n");
		}
	}
	else
		printf("Invalid Amount, must be multiple of 100\n");

	printf("Remaining Balance : %.2f\n", balance);

	return 0;
}