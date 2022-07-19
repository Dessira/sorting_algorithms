#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function sorts an array of integers
 * in ascending order using Bubble sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int limit, holder;
	size_t i, x;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; ++i)
	{
		limit = 0;

		for (x = 0; x < size - i - 1; ++x)
		{
			if (array[x] > array[x + 1])
			{
				holder = array[x];
				array[x] = array[x + 1];
				array[x + 1] = holder;
				limit = 1;
			}
			print_array(array, size);
		}
		if (limit == 0)
		{
			break;
		}
	}
}
