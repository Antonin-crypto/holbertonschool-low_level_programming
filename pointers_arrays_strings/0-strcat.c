#include "main.h"

/**
 * _strcat - copy and cat a two string
 * @dest: string to receve cat
 * @src: source for cat
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*c != '\0')
		c++;
	while (*src != '\0')
	{
		*c++ = *src++;
	}
	*c = '\0';
		return (dest);
}
