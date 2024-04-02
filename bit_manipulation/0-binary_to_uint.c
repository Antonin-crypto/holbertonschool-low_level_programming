#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: String representing a binary number.
 *
 *
 * Return: void
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int  result = 0;
	int i;

	if (b == NULL)
		return (0);

	/*Iterate through the string until we reach the null terminator*/
	for (i = 0; b[i] != '\0'; i++)
	{
		/*If the current character is not '0' or '1', return 0*/
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/*Shift the result left by one bit and add the current bit*/
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
