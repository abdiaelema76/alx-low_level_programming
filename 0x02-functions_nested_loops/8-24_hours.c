#include "main.h"
/**
*jack_bauer - function that prints every min
*
*Return: 0
*/

void jack_bauer(void)
{

	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int minutes_reminder;

	while (hours <= 59)
	{
	mins_reminder = minutes % 10;
	hours_reminder = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_reminder + '0');
	_putchar(':');
	_putchar(minutes 10 + '0');
	_putchar(mins_reminder + '0');
		minute++
	_putchar('\n');

	}
	hours++;
	munutes = 0;

}
