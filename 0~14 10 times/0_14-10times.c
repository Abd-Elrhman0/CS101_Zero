#include "main.h"

/**
 *
 * print0_14 - print from 0 to 14 followed by new line.
 *
 * Return: 0.
 */

int print0_14(void)
{
	int j;
        int i;
        int f;
        for (f = 1; f <= 10; f++)
        {

                for (j = 48; j <= 57; j++)
                {
                        putchar(j);
                        putchar(32);
                }

                for (i = 48; i <= 52; i++)
                {
                        putchar(49);
                        putchar(i);
                        putchar(32);
                }
                putchar('\n');
        }
        return(0);
}
