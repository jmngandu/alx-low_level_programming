#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds all positive numbers and prints it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors, 1 if invalid argument
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc > 1)
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
				if (argv[i][j] < '0' || argv[i][j] > '9')
					return (printf("Error\n"), 1);
			res += atoi(argv[i]);
		}
	printf("%i\n", res);
	return (0);
}

