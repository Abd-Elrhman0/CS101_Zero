#include "main.h"

/**
 * _isxdigit - Checks whether a character is a hexadecimal
 * digit.
 *
 * @c: the char. will be checked.
 *
 * Return: 0 if the char. is a hexadecimal digit,
 * -1 if it is not a hexadecimal digit.
 */

int _isxdigit(int c)
{
	if (c >= 48 && c <= 57 || c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (0);


	else
		return (-1);

}
