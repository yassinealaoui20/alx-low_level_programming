#include "main.h"
/**
 * _puts_recursion - prints a string follwed by '\n'
 * @s: a pointer to the first C in array in memory
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
