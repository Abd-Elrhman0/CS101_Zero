#include "main.h"

/**
 * main - test the code.
 *
 * Return: 0.
 */

int main(void)
{
	int target, end, begininng, choice, n, j;
	int arr[100];

	printf("do you want to search in rondom array or ordered array? ");
	printf("(write '1' for rondom and '2' for ordered)\n");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("what is array size?\n");
		scanf("%d", &n);

		printf("what is your array?\n");
		for (j = 0; j < n; j++)
			scanf("%d", &arr[j]);

		printf("what is your target?\n");
		scanf("%d", &target);

		printf("your target in index %d.\n", linear(target, n, arr));
	}
	else if (choice == 2)
	{

		printf("beginning?\n");
		scanf("%d", &begininng);

		printf("end?\n");
		scanf("%d", &end);

		printf("target?\n");
		scanf("%d", &target);

		printf("your target in index %d.\n", binary(begininng, end, target));
	}
	else
		printf("please choose 1 or 2 answer\n");

}
