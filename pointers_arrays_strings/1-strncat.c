#include "main.h"
#include "2-strlen.c"
/**
 * _strncat - cat 2 string with n param
 * @dest: string destinataire
 * @src: string source
 * @n: n bytes
 * Return: dest with cat src
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = _strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
