#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it
 * with a specific character
 * Return: 0
 * @size: size of the array
 * @c:character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *e;

	e = malloc(sizeof(char) * size);
	if (!size || !e)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		e[i] = c;
	}
	return (e);
}
