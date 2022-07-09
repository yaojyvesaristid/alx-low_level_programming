#include "main.h"
#include <ctype.h>
/**
 * _isdigit - function that checks for digit characters
 * @c: int type number
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
