#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the num of args you passed to it
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, val;
	char *endPtr;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			val = strtol(argv[i], &endPtr, 10);
			if (!*endPtr)
				sum += val;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
