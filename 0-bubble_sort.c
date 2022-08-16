#include "sort.h"

/**
 * bubble_sort - a fuction that sorts an array by comparison in every iteration
 * @array: array to be sorted
 * @size: size of the array
 * Return - None
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, tmp, x;

	for (x = 0; x < size ; x++)
	{
		for (j = 1; j < size - x; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
