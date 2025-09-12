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
	if (c <= 122 && c >= 97)
		printf("\nthe lower case: %c\n", _toupper(c));

	else
		printf("please enter a small letter.\n");

	return (0);
}
