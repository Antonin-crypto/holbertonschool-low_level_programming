#include "main.h"
/**
 * print_numbers- Prints all single digit numbers of base 10 starting from 0,
 * only using putchar and without char variables.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 9; num++)
		putchar((num % 10) + '0');

	_putchar('\n');

	return (0);
}
