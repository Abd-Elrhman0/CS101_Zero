#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	char str[] = "ABCD";
	char str1[] = "ABCE";
	int x = _strcmp(str, str1);

	if (x > 0)
		printf("%s is greater than %s\n", str, str1);

	else if (x < 0)
		printf("%s is greater than %s\n", str, str1);

	else
		printf("%s is equal to %s\n", str, str1);

	return (0);
}
