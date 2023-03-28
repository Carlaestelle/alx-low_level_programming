#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints all possible combinations
 *		of two two-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int num1 = 0, num2, num3, num4;

	while (num1 <= 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					if (((num3 + num4) > (num1 + num2)
						&&  num3 >= num1) || num1 < num3)
					{
						putchar(num1 + 48);
						putchar(num2 + 48);
						putchar(' ');
						putchar(num3 + 48);
						putchar(num4 + 48);

					if (num1 + num2 + num3 + num4 < 35)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
