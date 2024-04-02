#include "main.h"
/**
 * print_binary - print number in binary
 *
 * @n: number to print
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	/*Check if the number is greater than 1*/
	if (n > 1)
		/*Recursively call the function with n shifted right by one bit*/
		print_binary(n >> 1);
	/*Print the least significant bit of n as an ASCII character by adding '0'.*/
	_putchar((n & 1) + '0');
}
