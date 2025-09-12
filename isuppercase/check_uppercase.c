#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	int j;

	for (j = 65; j <= 90; j++)
	{
		if (c == j)
			return (1);
	}

	for (int j = 97; j <= 122; j++)
	{
		if (c == j)
			return (0);

		else
			exit(0);
	}
}
