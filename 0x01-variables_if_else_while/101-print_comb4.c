#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: All possible combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 <= 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num1 < num2 && num1 != num2)
				{
					if (num2 != num3 && num2 < num3)
					{
						putchar(num1 + 48);
						putchar(num2 + 48);
						putchar(num3 + 48);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
