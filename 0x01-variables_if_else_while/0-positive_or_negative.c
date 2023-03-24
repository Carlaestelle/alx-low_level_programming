#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: A program that prints whether the number
 *		is positive or negative or zero
 *
 * return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%lf is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%lf is zero \n", n);
	}
	else if (n < 0)
	{
		printf("%lf is negative \n", n);
	}
	return (0);
}
