#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main: Enter point fanction
 * n: integer
 * return: value 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is postive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
