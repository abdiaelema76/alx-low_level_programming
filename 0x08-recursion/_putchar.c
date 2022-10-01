#include <unistd.h>
/**
*_putchar - writes the character c to stdout
*@d: The character to print
*Return: on succes 1
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
