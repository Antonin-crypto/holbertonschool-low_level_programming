#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: strins sources
 * @accept: substring
 * Return: nomber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int end = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				end++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (end);
	}
	return (end);
}
