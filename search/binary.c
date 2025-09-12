#include "main.h"

/**
 * binary - search for the target with linear search method.
 *
 * @beginning: the first number in the array.
 * @end: the end of the array.
 * @target: the number we search for.
 *
 * Return: the index of the target if it is one of array elements, -1
 * if it's not.
 */

int binary(int beginning, int end, int target)
{
	int arr[100];
	int i;
	int base;

	for (i = beginning; i <= end; i++)
		arr[i] = i;
	base = beginning;

	while (beginning <= end)
	{
		if (target == arr[(end + beginning) / 2])
		return (((end + beginning) / 2) - base);

		else if (target > arr[(end + beginning) / 2])
		{
			beginning = ((end + beginning) / 2) + 1;
		}

		else
		{
			end = ((end + beginning) / 2) - 1;
		}
	}

	return (-1);

}
