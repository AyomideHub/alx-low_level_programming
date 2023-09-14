#include "main.h"

/**
 * main - funtion that check for lowercase character
 * @c - parameter to be checked
 * Return: always 0
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);

	} else 
	{

		return (0);
	}



}
