#include <stdio.h>

int main(int argc, char const *argv[])
{
int x;
int y;
printf("x?\n");
scanf("%d", &x);
printf("\ny?\n");
scanf("%d", &y);
printf("\n");
if (y>x)
{

	printf("y>x");

}

else if (x>y)
{

	printf("x>y");

}

else 
{

	printf("x=y");

}
}
