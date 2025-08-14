#include <stdio.h>
#include <string.h>

int main(void)
{
        int x;
        for (x = 0x61; x <= 0x7A; x++)
        {       if (x==0x65 || x==0x71)
		printf(" ");

		else
			putchar(x);

}
printf("\n");
return 0;
}
