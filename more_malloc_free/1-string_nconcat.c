#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenation of two string
 * @s1: first string
 * @s2: second string
 * @n: number of string 2
 * Return: Pointer with space or null if it's an ampty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1 = 0, size_s2 = 0, i = 0;
	char *ptr;

	/* if s1 = NULL or s2 = NULL */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*  size of string s1 and s2 */
	while (s1[size_s1])
		size_s1++;

	while (s2[size_s2])
		size_s2++;

	/* Allocate memory */
	if (n > size_s2)
		n = size_s2;

	ptr = malloc((size_s1 + n) + 1);

	if (ptr == NULL)
		return (NULL);

	/*duplicate and concate strings*/
	while (i < (size_s1 + n))
	{
		if (i <= size_s1)
			ptr[i] = s1[i];
		if (i >= size_s1)
			ptr[i] = *s2++;

		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}
