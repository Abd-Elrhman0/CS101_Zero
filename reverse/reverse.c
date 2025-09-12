#include <stdio.h>

/**
 * reverse - reverses an array.
 *
 * @arr: the array that will be reversed.
 * @n: number of array elements.
 *
 * Return: a pointer to the first element of the array.
 */

int *reverse(int arr[], int n)
{
	int j, temp;

	for (j = 0; j < n - 1; j++, n--)
	{
		temp = arr[j];
		arr[j] = arr[n - 1];
		arr[n - 1] = temp;
	}

	return (arr);
}

/**
 * main - call the reverse function and print the new array.
 *
 * Return: 0.
 */

int main(void)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]), j, f;
	int *p = reverse(arr, n);

	for (j = 0, f = 0; j < n; j++, f++)
		printf("%d", *(p + f));

	printf("\n");
}
