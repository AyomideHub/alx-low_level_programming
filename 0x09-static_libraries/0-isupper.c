#include "main.h"

/**
 * _isupper - function to check for uppercase character
 * @c - function parameter to be checked
 * Return: 1 on success or 0 on failure
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
