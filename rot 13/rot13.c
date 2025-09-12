#include <stdio.h>

/**
 * main - encrypts a text.
 *
 * Return: 0 if the user didn't enter only letters.
 */

int main(void)
{
	char text[100];
	char encryption[100];
	int j, i;

	printf("enter the text you want to encrypts:\n");
	scanf("%s", text);

	for (j = 0, i = 0; text[j]; j++, i++)
	{
		if (text[j] >= 65 && text[j] <= 77 || text[j] >= 97 && text[j] <= 109)
		{
			encryption[i] = text[j] + 13;
		}

		else if (text[j] >= 78 && text[j] <= 90 || text[j] >= 110 && text[j] <= 122)
		{
			encryption[i] = text[j] - 13;
		}

		else
			printf("\nyou can only enter letters.\n");
			return (0);
	}
	encryption[i] = '\0';
	printf("your code:\n%s\n", encryption);

}
