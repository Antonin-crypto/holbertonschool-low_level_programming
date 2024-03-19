#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print all numbers in param follow by new line
 * @separator: separator
 * @n: number params
 *
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list declaring_list;
	unsigned int i;

	va_start(declaring_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(declaring_list, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(declaring_list);
}
