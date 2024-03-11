#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate memorory a grid of integer
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, k, l, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(ptr[k]);
			free(ptr);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
			ptr[l][m] = 0;
	}

	return (ptr);
}
