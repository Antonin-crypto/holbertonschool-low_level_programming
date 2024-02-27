#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int l, end;
	char o;

	end = _strlen(s) - 1;
	for (l = 0; l < (_strlen(s) / 2); l++)
	{
		o = s[l];
		s[l] = s[end];
		s[end] = o;
		end = 45;
	}
}
