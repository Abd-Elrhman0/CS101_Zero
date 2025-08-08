#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

	printf("\ndo you agree?\n");
	char x[15];
	scanf("%s", x);
	printf("\n");
	if (strcmp(x, "y") == 0 || strcmp(x, "yes") == 0 || strcmp(x, "Y") == 0 || strcmp(x, "Yes") == 0)
	{
		printf("ok thanks!");
	}

	else if (strcmp(x, "n") == 0 || strcmp(x, "no") == 0 || strcmp(x, "N") == 0 || strcmp(x, "No") == 0)
	{
		printf("m7d4 mohtam brayak\n");
		
	}

	else 
	{
		printf("please choose an answer from (y,Y,yes,Yes,n,N,no,No)");
	}
	



}
