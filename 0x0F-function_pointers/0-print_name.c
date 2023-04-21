#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name -Prints a name
 *
 * @name: Input
 * @f: Pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
