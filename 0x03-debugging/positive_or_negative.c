#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description - A program that prints whether the number is positive or
 * negative
 *
 * Return - Always 0 (success)
 */

int main(void)
{
	float  n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code */
	if(n > 0)
		printf("%f is positive \n", n);
	else if(n == 0)
		printf("%f is zero \n", n);
	else
		printf("%f is negative \n", n);
	return (0);
}
