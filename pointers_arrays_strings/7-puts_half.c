#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints the half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int end, i;

	end = _strlen(str) - 1;
	for (i = 0; i <= end; i++)
	{
		if (i > end / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
