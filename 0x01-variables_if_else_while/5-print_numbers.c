#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing numbers
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
