#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * @n: param integer
 * Return: Void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n <= 999 && n >= 100)
		{
			_putchar('0' + (n / 100 % 10));
			_putchar('0' + (n / 10 % 10));
		}
		else if (n > 9 && n <= 99)
			_putchar('0' + (n / 10 % 10));
		if (n < 0)
		{
			_putchar('-');
			if (n < -99)
				_putchar('0' + ((n * -1) / 100) % 10);
			if (n < -9)
				_putchar('0' + ((n * -1) / 10) % 10);
		}
		if (n >= 0)
			_putchar('0' + n % 10);
		if (n < 0)
			_putchar('0' + ((n * -1) % 10));
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		if (n > 98)
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
