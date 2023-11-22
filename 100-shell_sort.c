#include "sort.h"


/**
 * shell_sort - function that sorts an array of integers in ascending order
 * using the Shell sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, gap;

	while ((gap * 3 + 1) < size)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i += 1)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
