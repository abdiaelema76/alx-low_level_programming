#include "main.h"

/**
*puts_half -prits all half strings
*@str: argument
*Description: retirns required value
*Return: returns void
*/

void puts_half(char *str)
{
	char *ptr = str;
	int = count;
	int j;

	while (*ptr != '\0')
	{
	count++;
	ptr++;
	}
	for (j = 0; j <= ((count - 1); j++)
	{

	if (j >= ((count) / 2) && j <= count % 2 == 0)

	{
	_putchar(str[j]);

	}
	else if (count % 2 != 0 && j > ((count - 1) / 2) && j <= count)
	_putchar(str[j]);
	}

	_putchar('\n');

	}
