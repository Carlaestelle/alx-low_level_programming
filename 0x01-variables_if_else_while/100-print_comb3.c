#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2;

	while (num1 <= 9)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
			putchar(num1 + 48);
			putchar(num2 + 48);
			putchar(',');
			putchar(' ');
			}
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
