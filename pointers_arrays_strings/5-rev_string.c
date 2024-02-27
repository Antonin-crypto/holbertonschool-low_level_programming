#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int j, end;
	char t;

	end = _strlen(s) - 1;
	for (j = 0; j < (_strlen(s) / 2); j++)
	{
		t = s[j];
		s[j] = s[end];
		s[end] = t;
		end--;
	}
}
