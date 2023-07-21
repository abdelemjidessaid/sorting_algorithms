#include "sort.h"

/**
 * bubble_sort - algorithm that sorts array of integers.
 * @array: pointer to the array of integers.
 * @size: the number of array's elements.
 * Return: void.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int unsorted = 1, tmp;

	if (!array)
		return;

	while (unsorted)
	{
		unsorted = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				unsorted = 1;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
