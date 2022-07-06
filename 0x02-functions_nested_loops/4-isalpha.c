#include "main.h"
/**
 * _isalpha - See if character is an alphabetic character.
 * @lettre: type int character
 * Return: 1 if letter, is alpha, and 0 otherwise
 */
int _isalpha(int lettre)
{
	if ((lettre > 96 && lettre < 123) || (lettre > 64 && lettre < 91))
		return (1);
	else
		return (0);
}
