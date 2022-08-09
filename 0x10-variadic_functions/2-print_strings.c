#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by new line
 * @separator : string character for separator between string
 * @n: int type for the number of string passed in argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char*);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
