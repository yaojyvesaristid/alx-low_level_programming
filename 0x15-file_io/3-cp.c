#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments vector
 */

int main(int argc, char *argv[])
{
	int fdFileFrom, fdFileTo, readFileFrom, writeFileTo;
	char *fileFrom, *fileTo;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = argv[1];
	fileTo = argv[2];
	if (fileFrom != NULL)
	{
		fdFileFrom = open(fileFrom, O_RDONLY);
		if (fdFileFrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", fileFrom);
			exit(98);
		}
	}
	fdFileTo = open(fileTo, O_RDONLY | O_TRUNC);
	if (fdFile == -1)
	{
		fdFileTo = open(fileTo, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fdFileTo == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", fileTo);
			exit(99);
		}
	}
	do {
		readFileFrom = read(fdFileFrom, buffer, 1024);
		if (readFileFrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s", fileFrom);
			exit(98);
		}
		writeFileTo = write(fdFileTo, buffer, readFileFrom);
		if (writeFileTo == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", fileTo);
			exit(99);
		}
	} while (readFileFrom > 0);
	writeFileTo = close(fdFileTo);
	if (writeFileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFileTo);
		exit(100);
	}
	readFileFrom = close(fdFileFrom);
	if (readFileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFileFrom);
		exit(100);
	}
	return (0);
}
