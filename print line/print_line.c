#include "main.h"
/**
 * print_line - prints a line.
 * @x: the length of the line.
 *
 * Return: 0.
 */
int print_line(int x)
{
	int j;

	for (j = 1; j <= x; j++)
		putchar('_');
	putchar('\n');
	return (0);
}
