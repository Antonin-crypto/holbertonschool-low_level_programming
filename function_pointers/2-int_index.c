#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Search an integer in an array
 * @array: Array source
 * @size: size of array
 * @cmp: function use to compare in array
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
