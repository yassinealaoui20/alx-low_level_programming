#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executing a function
 *
 * @array: params
 * @size: array
 * @action: pointer
 *
 * Return : void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
