#include "main.h"

/**
 * _isupper - function to check for uppercase character
 * @C - function parameter
 * Return: 1 on success or 0 on failure
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);

}
