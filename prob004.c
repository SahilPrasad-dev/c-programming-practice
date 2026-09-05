//FORMATTING VALUES OF TYPE DOUBLE AND FLOAT

# include <stdio.h>

int main()
{
	int trip1ID, trip2ID;
	float miles1, miles2;
	printf("Enter the trip 1 ID and miles travelled");
	scanf("%d %f", &trip1ID, &miles1);
	printf("Enter the trip 2 ID and miles travelled");
	scanf("%d %f", &trip2ID, &miles2);

	double km1, km2;
	km1 = miles1 * 1.60934;
	km2 = miles2 * 1.60934;

	printf("Trip ID    MileS    Km(%%.3lf)    Km(%%.2f)\n");
	printf("%-10d %-8.2f %-12.3lf %-8.2f\n", trip1ID, miles1, km1, (float)km1);
	printf("%-10d %-8.2f %-12.3lf %-8.2f\n", trip2ID, miles2, km2, (float)km2);

	return 0;
}

// perfect spacing ke liye jitna pura space h us se ek no. km dalo
//jaise tripid se miles tk 11 jagah h to specify 10 karo