#include "sort.h"

/**
 * swap - swaps the values
 * @a: input
 * @b: input
 */
void swap(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;
}
/**
 * bubble_sort - bubble sorting.
 * @array: the array to be sorted.
 * @size: the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
