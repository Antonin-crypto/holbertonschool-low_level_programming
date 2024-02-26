#include "main.h"

/**
 * _isdigit - check if c is a digit
 * @c: integer param
 * Return: 1 if is ok, 0 if false
 */

int _isdigit(int c)
{
	int n;

	if (c >= 48 && c <= 57)
		n = 1;
	if (!(c >= 48 && c <= 57))
		n = 0;

	return (n);
}
