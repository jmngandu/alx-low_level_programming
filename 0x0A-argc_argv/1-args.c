#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: arguments
 * @argv: array of the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argv;
	while (--argc)
	{
		i++;
	}
	printf("%i\n", i);
	return (0);
}
