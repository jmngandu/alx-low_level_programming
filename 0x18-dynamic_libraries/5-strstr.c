#include "main.h"
#include <stdlib.h>

#define true 1
#define false 0
#define bool int

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 * Return: pointer to substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *_needle = needle;
	bool found =  false;

	if (!*_needle)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			found = true;
			start = haystack;
			while (*_needle)
			{
				if (*haystack != *_needle)
				{
					found = false;
					_needle = needle;
					break;
				}

				haystack++;
				_needle++;
			}
		}

		if (found)
		{
			break;
		}

		haystack++;
	}
	if (found)
	{
		return (start);
	}

	return (NULL);
}
