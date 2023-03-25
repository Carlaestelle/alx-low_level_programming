#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Printing the alphabet in lowercase
 * 		and uppercase
 *
 * Return: Always 0
 */

int main()
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');

	return (0);
}
