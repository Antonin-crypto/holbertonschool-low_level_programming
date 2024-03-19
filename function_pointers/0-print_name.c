#include <stdlib.h>
/**
 * print_name - a function prints a name
 * @name: nome of function
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
