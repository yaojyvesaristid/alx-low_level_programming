#include "main.h"
/**
 * _atoi - Convert a string to integer.
 * @s: char array string
 * Description: Number in the string can be preceded by an infinite
 * number of characters.
 * You need to take into account all -/+ signs before the number.
 * If there are no numbers in the string, return 0.
 * No need to check for overflow.
 * Not allowed to hard-code special values.
 * Return: first integer found in string
 */
int _atoi(char *s)
{
	int i, sign = 1, res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * (-1);
		if (s[i] > 47 && s[i] < 58)
		{
			res = (res * 10) + (s[i] - '0');
			if (!(s[i + 1] > 47 && s[i + 1] < 58))
				break;
		}
	}
	if (sign < 0)
		res = res * (-1);
	return (res);
}
