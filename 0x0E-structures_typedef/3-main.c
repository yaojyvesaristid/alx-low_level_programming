#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opf = get_op_func(argv[2]);
	printf("%d\n", opf(a, b));

	return (0);
}
