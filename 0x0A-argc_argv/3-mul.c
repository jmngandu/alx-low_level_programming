#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two arguments and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%i\n", first * second);
		return (0);
	}
	printf("Error\n");
	return (1);
}
