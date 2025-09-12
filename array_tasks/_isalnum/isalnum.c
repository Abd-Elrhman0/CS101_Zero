#include "main.h"

/**
 * _isalnum - Checks whether a character is alphanumeric,
 *
 * @c: the char. will be checked.
 *
 * Return: 0 if the char. is alphanumeric, -1 it is not alphanumeric.
 */

int _isalnum(int c)
{
	if (c >= 48 && c <= 57 || c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (0);


	else
		return (-1);

}
