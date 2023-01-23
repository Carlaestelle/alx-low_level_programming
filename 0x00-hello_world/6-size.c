#include <stdio.h>

/**
 * main -Entry point
 *
 * Description - A C program that prints the sizes of of bytes occupied by each variable
 *
 * Return - Always 0 (success)
 */

int main(void)
{
	/*sizeof() evaluates the size of variables*/
	printf("The size of a character is %lu bytes \n", sizeof(char));
	printf("The size of an integer is %lu bytes \n", sizeof(int));
	printf("The size of a double is %lu byte(s) \n", sizeof(double));
	printf("The size of a long integer is %lu bytes \n", sizeof(long int));
	printf("The size of a long long integer is %lu bytes \n", sizeof(long long int));
	printf("The size of a float is %lu byte(s) \n", sizeof(float));
}
