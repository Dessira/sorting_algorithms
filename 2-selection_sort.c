#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swap;

	if (array == NULL || size < 2)
		return;

	i = 0;

	while (i < size - 1)
	{
		min = i;
		j = 1 + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		if (i != min)
		{
			swap = array[i];
			array[i] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
		i++;
	}
}
