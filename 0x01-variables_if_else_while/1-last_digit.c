#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	int y;

	y = n % 10;

	/* your code goes there */
	if (y > 5)
	{
		printf("The last digit of %i is %d and is greater than 5\n", n, y);
	} else if (y == 0)
	{
		printf("The last digit of %i is %d and is zero\n", n, y);
	} else if (y < 6 && y != 0)
	{
		printf("The last digit of %i is %d and is less than 6 not 0", n, y);
	}
	return (0);
}
