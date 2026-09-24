// Quadrant Identifier
// Context : A robotics simulator computes coordinate trajectories in 2D space.
// Task : Read two floating - point numbers X and Y representing a 2D point (X, Y).
// Use nested conditional logic to determine where the point lies :
// Quadrant I, Quadrant II, Quadrant III, Quadrant IV, X - Axis, Y - Axis, or Origin.
// Input Format : Two space - separated floats X and Y.
// Output Format : Print the position category.

#include <stdio.h>
int main()
{
	printf("Enter X and Y coordinates : ");
	int x, y;
	scanf("%d  %d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
			printf("Quadrant I");
		else if (y < 0)
			printf("Quadrant IV");
		else
			printf("X Axis");
	}
	else if (x < 0)
	{
		if (y > 0)
			printf("Quadrant II");
		else if (y < 0)
			printf("Quadrant III");
		else
			printf("X Axis");
	}
	else
	{
		if (y == 0)
			printf("Origin");
		else
			printf("Y Axis");
	}
	return 0;
}