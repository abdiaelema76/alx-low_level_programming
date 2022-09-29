#include <unistd.h>
#include "main.h"
/**
*_putchar - writes the character c to stdout
*@d: The character to print
*Return: on succes 1
*/
int_putchar(char c)
{
	returnc(write(1, &c, 1));
}
