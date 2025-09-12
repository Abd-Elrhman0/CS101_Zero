#include <stdio.h>

int main()
{
        int number_of_ines;
        int number_of_hashs = 1;

        printf("inter the size of the pyramid = ");
        scanf("%d", &number_of_ines);
	int l = number_of_ines;
        for (int j = 1; j <= number_of_ines; j++, number_of_hashs++, l--)
        {
		for (int j = 1; j <= l - 1; j++)
			printf(" ");
		for (int j = 1; j <= number_of_ines - l + 1; j++)
			printf("#");
		printf(" ");
                for (int j = 1; j <= number_of_hashs; j++)
                        printf("#");
                printf("\n");
        }
}
