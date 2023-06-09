#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns its index
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: -1
 * Otherwize index of 1st
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}

	return (-1);
}
