#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: array to be sorted
 * @size: array size
 * Return - None
 */
void selection_sort(int *array, size_t size)

{
	size_t i, j, tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			else
				continue;

		}
	}
}
