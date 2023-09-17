#include <stdio.h>

/**
 * Main - Entry point
 * Return: always 0 success
 */

int main(void)
{
	int i = 0;
        
	while (i < 10)
	{
		printf ("%i", i++);
	}
	putchar('\n');
	return (0);
}
