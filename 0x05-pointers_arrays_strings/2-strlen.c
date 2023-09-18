#include "main.h"
#include <string.h>
#include <stdio.h>


int _strlen(char *s)
{
	int i;
	int stcount;

	for (i = 0; s[i] != '\0'; i++)
		stcount++;
	return (stcount);
}
