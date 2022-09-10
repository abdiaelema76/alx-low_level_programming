#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates a random number
 *
 * outputs whether a number is zero, positive or negative
 *
 * Return: 0
 *
 */
int main(void)

{
	int n;
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;

	/*your code goes here */
	if (n == 0)

	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	     {
		   printf("%d is positive\n", n);
		}
	return (0);
}
