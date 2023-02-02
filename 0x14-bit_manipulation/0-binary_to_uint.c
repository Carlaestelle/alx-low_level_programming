#include <stddef.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description - convert binary number to unsigned int
 *
 * Return -as explained in code
 */

unsigned int binary_to_uint(const char *b) 
{
	if (b == NULL)
		return (0);
	
	unsigned int result = 0;
	size_t len = strlen(b);

	for (int i = 0; i < len; i++) 
	{
		if (b[i] != '0' && b[i] != '1') 
			return (0);

		result += (b[i] - '0') * pow(2, len - i - 1);
	}

	return result;
}
