#include "main.h"

/**
 * _isupper - check if char is in uppercase
 * Return: 1 if yes, 0 if no
 * @c: char param
 */
int _isupper(int c)
{
	int n;

	if (c >= 65 && c <= 90)
		n = 1;
	if (!(c >= 65 && c <= 90))
		n = 0;

	return (n);
}
