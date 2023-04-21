#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: an integer
 * @argv: array pointers to char
 * Return: 0
 */
int main(int argc, char **argv)
{

	int i = 1, j, sum = 0;

	while (i < argc)
	{
		char *num = argv[i];

		j = 0;
		while (num[j] != '\0')
		{
			if (isdigit(num[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(num);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
