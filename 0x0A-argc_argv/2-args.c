#include <stdio.h>
/**
 * main - Entry point
 * @argc: an integer
 * @argv: array pointers to char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
