#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to be reverse
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int wc = 0;

	for (a = 0; s[a] != '\0'; a++)
		wc++;
	for (a = 0; a < wc / 2; a++)
	{
		char b;

		b = s[a];
		s[a] = s[wc - 1 - a];
		s[wc - 1 - a] = b;
	}

}

