#include "main.h"
/**
 * get_bit - Get the bit object
 *
 * @n: number to convert
 * @index: index to use
 * Return: the number at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Create a mask to isolate the bit at the given index*/
	unsigned long int mask =  1UL  << index;

	/*Check if the index is out of bounds*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		/*Index out of bounds, return -1*/
		return (-1);
	}

	/*Use bitwise AND operation to check if the bit is set or not*/
	if ((n & mask) != 0)
	{
		/*Bit is set (equals 1)*/
		return (1);
	}
	else
	{
		/*Bit is not set (equals 0)*/
		return (0);
	}
}
