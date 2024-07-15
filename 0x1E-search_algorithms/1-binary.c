#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in the array
 * @value: the value being searched for
 * Return: 1 if i and -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
