#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - copy a string with new allocate memory
 * @str: pointer to a string
 * Return: Null if str = Null else return pointer to str
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ptr, *dup;

	if (str == NULL)
		return (NULL);

	/* string length */
	while (str[size])
		size++;

	/* allocate memory for duplication */
	ptr = malloc(size + 1);

	if (ptr == NULL)
		return (NULL);

	/* copy string */
	dup = ptr;
	while (*str)
		*dup++ = *str++;

	*dup = '\0';

	return (ptr);
}
