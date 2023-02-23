#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define VALID_CHARS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
#define PASSWORD_LENGTH 10

int main(void)
{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = VALID_CHARS[rand() % strlen(VALID_CHARS)];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
