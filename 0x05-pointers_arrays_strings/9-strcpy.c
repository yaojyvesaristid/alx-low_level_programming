#include "main.h"
#include <string.h>
/**
 * _strcpy - Copy a string src to another string dest
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by dest
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
