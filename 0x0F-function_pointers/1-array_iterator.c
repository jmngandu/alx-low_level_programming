#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a parameter
 * on each element of an array
 * @array: input array
 * @size: number of elements to loop through
 * @action: action to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (action && array)
		while (size--)
			action(*(array++));

}
