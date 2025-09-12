#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	char c;

	printf("yr char?\n");
	scanf("%c", &c);
	printf("%c: %d\n", c, _isxdigit(c));
}
