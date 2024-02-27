#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @a: first integer to swap
 * @b: second integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
