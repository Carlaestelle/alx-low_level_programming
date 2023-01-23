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
	printf("The size of a character is %d bytes \n", sizeof(char));
	printf("The size of an integer is %d bytes \n", sizeof(int));
	printf("
