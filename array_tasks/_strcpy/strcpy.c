#include "main.h"

/**
 * _strcpy - copies data from one string into the memory of another
 * string.
 *
 * @str: source string.
 * @str1: destination string.
 *
 *Return: str1 the distination string which will recieve the copied data.
 */

char *_strcpy(char str1[], const char str[])
{
	int j, i;

	for (j = 0, i = 0; str[j] != '\0'; j++, i++)
		str1[i] = str[j];
	str1[i] = '\0';

	return (str1);
}
