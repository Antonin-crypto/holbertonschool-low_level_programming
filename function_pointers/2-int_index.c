#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search an integer in an array
 * @array: Array source
 * @size: size of array
 * @cmp: function use to compare in array
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
