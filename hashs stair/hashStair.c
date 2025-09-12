#include <stdio.h>

int main()
{
	int j, i, number_of_ines;
	int number_of_hashs = 1;

	printf("inter the size of the stair = ");
	scanf("%d", &number_of_ines);
	for (j = 1; j <= number_of_ines; j++, number_of_hashs++)
	{
		for (i = 1; i <= number_of_hashs; i++)
			printf("#");
		printf("\n");
	}
}
