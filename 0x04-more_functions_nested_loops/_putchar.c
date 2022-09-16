#include <unistd.h>

/**
*_putcha - writes the character c to stdout
*
*@c: the character to print
*
*Return: 0
*on error, -1 is returned, and erro is set appropriate
*/
int _putchar(char c)
{
	return (write(1, &c, 1));

	}
