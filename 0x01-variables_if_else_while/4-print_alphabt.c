#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all alphabets except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
