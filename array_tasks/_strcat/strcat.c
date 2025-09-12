#include "main.h"

/**
 * _strcat - appends a copy of one string to the end of another.
 *
 * @str: source string.
 * @str1: destination string.
 *
 * Return: the destination string after editing.
 */

char *_strcat(char str[], char str1[])
{
	int j, i, f, k;

	for (j = 0; str[j] != '\0' ; j++)
		;
	for (f = 0; str1[f] != '\0' ; f++)
		;
	for (k = 0, i = j; i <= j + f; k++, i++)
		str[i] = str1[k];

	return (str);
}
