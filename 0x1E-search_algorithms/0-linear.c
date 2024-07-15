#include "search_algos.h"

/**
 * linear_search - searches for a vale in a list
 * @array: Array that will have the linear search being performed
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
