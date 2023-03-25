#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
