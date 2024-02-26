#include "main.h"
/**
 * _isdigit- checks for alphabetic character
 *@c: character to be verified
 *Return: return 0 or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return 1;
} else {
        return 0;
    }
}
