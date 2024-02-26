#include "main.h"
#include <stdio.h>
/**
 *int _isupper-checks for uppercase character
 *@c: character to be verified
 * Return: return 0 or 1
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (0);
}
else
{
	return (1);
}
}
