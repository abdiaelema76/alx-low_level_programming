#include "main.h"

/**
*_puts - prints out string of the stdout
*@str: argument to the function
*Description: returns the required result
*Return: return void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');

	}
