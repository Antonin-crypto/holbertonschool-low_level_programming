#include "main.h"
/**
 * reverse_array - reverse content of an array
 * @a: array to reverse
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, d;

	for (i = 0; i < n; i++)
	{
		d = a[i];
		a[i] = a[n - 1];
		a[n - 1] = d;
		n--;
	}
}
