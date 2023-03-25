#include <stdio.h>

/**
 * main - Entyr point
 *
 * Description: Prints the alphabet backwards
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
