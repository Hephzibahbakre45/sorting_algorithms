#include "sort.h"
/**
 * selection_sort - the function that sorts an array of
 * integers in ascending order
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: none
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int mini = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[i])
				mini = j;
		}
		if (mini)
		{
			tmp = array[i];
			array[i] = array[mini];
			array[mini] = tmp;
			print_array(array, size);
		}
		mini = 0;
	}
}
