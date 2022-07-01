#include <stdio.h>
#include <unistd.h> 
#include <string.h> 
/**
 *  main - main block
 *  Return: 1
 */
int main(void)
{
	int string_size = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", string_size);
	return (1);
}
