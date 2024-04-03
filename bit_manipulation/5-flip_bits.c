#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip
 *
 * @n: number 1
 * @m: number 2
 * Return: The number of bits change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	/*Count the number of set bits in the result*/
	while (result != 0)
	{
		/*Use bitwise AND with 1 to check if the least significant bit is set*/
		if (result & 1)
		{
			count++;
		}
		/*Right shift the XOR result to check the next bit*/
		result >>= 1;
	}
	return (count);
}
