#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: an integer
 * @argv: array pointers to char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num = 0;
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	change = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		num += j / coins[i];
		j %= coins[i];
	}

	printf("%d\n", num);
	return (0);
}
