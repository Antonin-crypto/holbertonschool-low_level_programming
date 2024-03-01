#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int k, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
			break;
		}
		else
			k = 0;
	}

	return (k);
}
