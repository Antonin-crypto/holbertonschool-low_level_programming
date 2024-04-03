#include "main.h"
/**
 * clear_bit - set value to 0 at the index
 *
 * @n: the number in binary
 * @index: the index
 * Return: the bit value set to 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Create a mask to clear the bit at the given index*/
	unsigned long int mask = 1UL << index;

	/*Check if index is within bounds*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		/*Error: index out of bounds*/
		return (-1);
	}

	/*Invert the mask to clear the bit at the index using bit AND with the comp*/
	*n &= ~mask;

	return (1);
}
