#include "main.h"

/**
 * main - check the code.
 *
 * Return: always 0.
 */

int main(void)
{
	int n;

	printf("what is the length of the line\n");
	scanf("%d", &n);
	printf("\nyour order:\n");
	print_line(n);
	printf("\ntesting my code:\n");
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}

