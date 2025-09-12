#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	char c;

	printf("yr letter?\n");
	scanf("%c", &c);
	if (c <= 90 && c >= 65)
		printf("\nthe lower case: %c\n", _tolower(c));

	else
		printf("please enter a capital letter.\n");

	return (0);
}
