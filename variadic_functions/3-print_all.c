#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - Prints an integer
 * @ap: Argument pointer
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Prints a float
 * @ap: Argument pointer
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	form_t form[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	va_list ap;
	char *separator = "";
	int first = 0;
	int second = 0;

	va_start(ap, format);
	while (format && format[first])
	{
		while (form[second].format_print)
		{
			if (format[first] == form[second].format_print[0])
			{
				printf("%s", separator);
				form[second].func(ap);
				separator = ", ";
			}
			++second;
		}
	second = 0;
		++first;
	}
	printf("\n");
	va_end(ap);
}
