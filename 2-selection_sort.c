#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers with
 * selection sort algo.
 * @array: pointer to the array.
 * @size: the number of integers in array.
*/
void selection_sort(int *array, size_t size)
{
	int min, tmp, flag = 0;
	size_t i, j;

	if (!array || !(*array))
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				flag = 1;
			}
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (flag)
		{
			print_array(array, size);
			flag = 0;
		}
	}
}
