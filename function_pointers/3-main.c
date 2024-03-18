#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program to find an operation
 * @argc: number of argument
 * @argv: list of argument
 *
 * Return: 0 Success
*/
int main(int argc, char *argv[])
{
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(argv[2]);

	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fptr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
