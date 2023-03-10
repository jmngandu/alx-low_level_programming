#include "main.h"

/**
 *_strncat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *@n:amount tot be concatenated
 *Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;

	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (length);
	*dest = *cat;

	return (cat);
}
