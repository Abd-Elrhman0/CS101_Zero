#include "main.h"

/**
 * _strlen - returns the length of a string, which is the number
 * of characters up to the first null terminating character.
 *
 * @str: A string to measure the length of.
 *
 * Return: the length of the string.
 */

int _strlen(const char str[])
{
	int j;

	for (j = 0; str[j]; j++)
		;

	return (j);
}
