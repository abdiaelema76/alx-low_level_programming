#include "main.h"

/**
*print_numbers - print the digit 1-9
*/
void print_numbers(void)
{
	int i = 0;

	while (1 <= 9)
	{
	_putchar(i + '0');
	i++;
	}
	_putchar('\n');
}
