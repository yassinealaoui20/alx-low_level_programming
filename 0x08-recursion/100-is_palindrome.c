#include "main.h"

/**
 * _str_len - recursively the length
 * @str: the string
 * @len: current length
 *
 * Return: length of the string
 */
int _str_len(char *str, int len)
{
	if (*str == 0)
		return (len - 1);
	return (_str_len(str + 1, len + 1));
}

/**
 * _str_rev - recursively compares a string
 * @str: the string
 * @len: the length
 *
 * Return: 1 if the string is a palindrome else 0
 */
int _str_rev(char *str, int len)
{
	if (*str != *(str + len))
		return (0);
	else if (*str == 0)
		return (1);
	return (_str_rev(str + 1, len - 2));
}

/**
 * is_palindrome - if a string is a palindrome
 * @s: string checked
 *
 * Return: 1 if the string is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int len = _str_len(s, 0);
	return (_str_rev(s, len));
}

