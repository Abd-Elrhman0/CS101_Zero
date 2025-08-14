#include <stdio.h>
#include <string.h>

int main(void)
{
        int x;
        int y;
 
        for (x = 0x30; x <= 0x39; x++)
        {

                for (y = x+1; y <= 0x39; y++)
        {
                      if (y==x)
                                continue;

                               putchar(x);
                                putchar(y);
				if (x == 0x38 && y == 0x39)
                        {
				break;

                               
                        }
                        

                        
                        
                               
                                
                                putchar(0x2C);
                      
                }
        }
	putchar('\n');
        return 0;
}

