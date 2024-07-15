#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * @array: pointer to the first element in the array
 * @size: number of the elements in the array
 * @value: value to be searched for
 * Return: 1 if the value is found and -1 if not
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = 0;
	int i = 0;
	int b = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	while (array[i] < value && i < (int) size)
	{
		b = i;
		i = b + jump;
		if (b < (int) size)
			printf("Value checked array[%d] = [%d]\n", b, array[b]);
	}
	if (b >= (int) size && array[size] != value)
		b -= jump;

	printf("Value found between indexex [%d] and [%d] \n", b, b + jump);

	while (array[b] < value)
	{
		if (b >= (int) size)
			break;
		printf("Value checked array[%d] = [%d]\n",  b, array[b]);
		b += 1;
	}

	if (array[b] == value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		return (b);
	}
	return (-1);
}
