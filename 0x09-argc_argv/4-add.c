/*
 * File: 4-add.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;

	for (num = 1; num < argc; num++)
	{
		if (atoi(argv[num]) <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}