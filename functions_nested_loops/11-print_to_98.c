#include "main.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The number to start printing from
* Return: Always 0.
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		int temp = n, count = 0;
		while (temp > 0)
		{
			temp /= 10;
			count++;
		}
		char str[count];
		while (count > 0)
		{
			count--;
			str[count] = n % 10 + '0';
			n /= 10;
		}
		for (int i = 0; i < sizeof(str); i++)
		{
			_putchar(str[i]);
		}
		_putchar(',');
		_putchar(' ');
		n += (n < 98) ? 1 : -1;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
int main()
{
	print_to_98(5);
	print_to_98(102);
	return 0;
}
