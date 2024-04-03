#include "main.h"
/**
 * set_bit - set a bit to one at a given index
 * @n: number to change
 * @index: index of the bit to set
 * Return: -1 in case of failure or 1 in case of success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*Create a mask to set the bit at the given index*/
	unsigned long int mask = 1UL << index;

	/*Check if index is within bounds*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Error: index out of bounds*/
		return (-1);
	}

	/*Set the bit at the index to 1 using bitwise OR*/
	*n |= mask;

	return (1);
}
