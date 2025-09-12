#include "main.h"
/**
 * main - check the code.
 *
 * Return: 0.
 */

int main(void)
{
    char c;
    printf("your char?\n");
    scanf("%c", &c);
    printf("%d\n", _isdigit(c));
}
