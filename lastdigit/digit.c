#include <stdio.h>
int main(void)
{
	printf("what is yr num?\n");
        long n;
	int x;
	scanf("%ld", &n);
        x = n % 10;
	printf("\nthe last digit of ");
	printf("%ld", n);

	if (x>5)
		printf(" is greater than 5");

	else if (x=0)
		printf(" is 0");

	else
		printf(" is less than 6 and not 0");


	printf("\n");

	return 0;

}

        	

