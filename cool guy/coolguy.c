#include <stdio.h>
#include <string.h>

int main(void) 
{
	int x;
	for (x = 0x30; x <= 0x39; x++)
	{
		if (x==0x39)
		{	putchar(x);
		}
		else
		{	putchar(x);
			putchar(0x20);
			putchar(0x2C);
		}
	}
	return 0;
}

