#include "sort.h"

void swap(int *a, int *b);

/**
 * shell_sort - function that sorts arrays with shell sort algorithm.
 * @array: the given array.
 * @size: the length of array.
*/
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;

	while (gap < (size / 3))
		gap = (3 * gap) + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			j = i;

			while (j >= gap && array[j] < array[j - gap])
			{
				swap(&array[j], &array[j - gap]);
				j -= gap;
			}
		}

		print_array(array, size);
		gap /= 3;
	}
}

/**
 * swap - function that swaps two elements of array.
 * @a: pointer to the first element.
 * @b: pointer to the second element.
 * Return: void.
*/
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}