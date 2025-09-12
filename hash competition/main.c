#include <stdio.h>

void hash_print(unsigned int n, char type);

int main()
{
	unsigned int n;
	char type;

	printf("your type? ");
	scanf("%c", &type);
	printf("your size? ");
	scanf("%u", &n);

	if (type == 's' || type == 'u' || type == 'd' && n > 0 && n < 100)
	{
		hash_print(n, type);
	}

	else
		printf("available types (s, u, d) and n must be > 0 and < 100");

}
