#include <stdio.h>
/**
*main - prints alphabets in lowercase then upper
*
*Return: 0
*
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);

	putchar('\n');
	return (0);
	}
