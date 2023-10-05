#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - Write a function that returns a pointer to a 2
* dimensional array of integers.
* @height: height input
* @width: width
* Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **A;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	A = malloc(sizeof(int *) * height);
	if (A == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{

		A[x] = malloc(sizeof(int) * width);
		if (A[x] == NULL)
		{
			for (; x >= 0; x--)
				free(A[x]);
				free(A);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
	for (y = 0; y < width; y++)
		A[x][y] = 0;
	}
	return (A);
}
