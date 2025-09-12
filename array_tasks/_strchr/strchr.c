#include "main.h"

/**
 * _strchr - returns a pointer to the position of the first occurrence
 * of a character in a string.
 *
 * @str: A pointer to the string being searched.
 * @c: The character to search for. A character's ASCII value can also
 * be used.
 *
 * Return: a pointer to the position of the first occurrence
 * of a character in a string.
 */

char *_strchr(const char str[], int c)
{
	int j, k, i, t;

	for (j = 0; str[j] != c; j++)
		;
	return ((char *)&str[j]);

}
