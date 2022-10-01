#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_puts_recursion -  function that prints a string ,folloewd by new line.
*@s: string
*Return: returns void
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
	}
