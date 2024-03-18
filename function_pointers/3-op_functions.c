#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - addition of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: Addition of 2 integer
 */

int op_add(int a,int b)
{
	return(a + b);
}

/**
 * op_sub - Substraction of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: Substraction of 2 integer
 */

int op_sub(int a, int b)
{
	return(a - b);
}

/**
  * op_mul - multiplication of 2 integer
  * @a: first integer
  * @b: second integer
  * Return: multiplication of 2 integer
  */

int op_mul(int a,int b)
{
	return(a * b);
}

/**
 * op_div - division of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: Division of 2 integer
 */

int op_div(int a,int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}

/**
 * op_mod - modulo of 2 integer
 * @a: first integer
 * @b: second integer
 * Return: modulo of 2 integer
 */
int op_mod(int a,int b )
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}
