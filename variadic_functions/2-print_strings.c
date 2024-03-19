#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a string with separators
 * @separator: element separator
 * @n: n elements of string
 *
 * Return: Void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list declaring_list;
	char *ptr;
	unsigned int i;

	va_start(declaring_list, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(declaring_list, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(declaring_list);
}
