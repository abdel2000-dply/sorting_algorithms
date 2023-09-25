#include "sort.h"

/**
 * selection_sort - selection sort function
 * @array: the array the sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int t;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (min != i)
		{
			t = array[i];
			array[i] = array[min];
			array[min] = t;
			print_array(array, size);
		}
	}
}
