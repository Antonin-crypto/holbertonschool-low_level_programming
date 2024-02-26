#include "main.h"

/**
 * print_most_numbers - print numbers without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		if (!(x == 2 || x == 4))
			_putchar('0' + x);
	_putchar('\n');
}
