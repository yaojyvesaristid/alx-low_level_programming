#include "main.h"
/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @lettre: char type letter
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int lettre)
{
	if (lettre > 96 && lettre < 123)
		return (1);
	else
		return (0);
}
