#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints other character
 * @str: string use
 * Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; x < 10; x++)
		if (!(x == 1 || x == 3 || x == 5 || x == 7 || x == 9))
			_putchar(str[0 + x] );
	_putchar('\n');

	return;
}
