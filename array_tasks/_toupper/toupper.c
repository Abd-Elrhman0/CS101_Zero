#include "main.h"

/**
 * _toupper - Returns a uppercase version of a character.
 *
 * @c: the character will be scaned.
 *
 * Return: a uppercase version of a letter or -1 if it's
 * not a letter.
 */

char _toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);

	else
		return (-1);

}
