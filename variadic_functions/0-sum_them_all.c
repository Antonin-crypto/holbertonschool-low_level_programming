#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters
 * @n: parameters int
 * Return: Sum of all params
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list declaring;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(declaring, n);

	for (i = 0; i < n ; i++)
		sum += va_arg(declaring, int);

	va_end(declaring);

	return (sum);
}
