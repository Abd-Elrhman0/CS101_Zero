#include "main.h"

/**
 * _tolower - Returns a lowercase version of a character.
 *
 * @c: the character will be scaned.
 *
 * Return: a lowercase version of a letter or 0 if it's
 * not a letter.
 */

char _tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);

	else
		return (-1);

}
