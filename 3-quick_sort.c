#include "sort.h"

void sort_halves(int *array, int start, int end, size_t size);
int partition(int *array, int start, int end);

/**
 * quick_sort - function that sorts an array of integers
 * with quick sort algo.
 * @array: pointer to the array.
 * @size: the number of elements in array.
 * Return: void.
*/
void quick_sort(int *array, size_t size)
{
	if (!array || !(*array) || size < 2)
		return;
	sort_halves(array, 0, size - 1, size);
}

/**
 * sort_halves - function that sort the halves of array.
 * @array: the pointer to array of integers.
 * @start: the start's index.
 * @end: the end's index.
 * @size: the size of array.
 * Return: void.
*/
void sort_halves(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start >= end)
		return;
	pivot = partition(array, start, end);

	sort_halves(array, 0, pivot - 1, size);
	sort_halves(array, pivot + 1, end, size);

	print_array(array, size);
}


/**
 * partition - function that sort a partition and returns the pivot index.
 * @array: the pointer of array.
 * @start: start's index.
 * @end: end's index.
 * Return: the pivot index.
*/
int partition(int *array, int start, int end)
{
	int i = start - 1, j = start, tmp;

	for ( ; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
	i++;
	tmp = array[i];
	array[i] = array[end];
	array[end] = tmp;

	return (i);
}
