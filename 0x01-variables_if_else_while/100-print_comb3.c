#include <stdio.h>

/**
*main - prints programme that executes different commbinations of twoo digit
*
*Return: 0
*
*/

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	putchar(i);
	}
	for (j = 0; j <= 9; j++)
	{
	putchar(j);
	}
	putchar(',');

	putchar(" ");

	putchar('\n');

	return (0);

	}
