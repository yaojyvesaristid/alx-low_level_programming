#include <stdio.h>
/**
 * main - print the num of args you passed to it
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
