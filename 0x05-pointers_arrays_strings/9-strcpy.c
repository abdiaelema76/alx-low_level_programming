#include "main.h"

/**
*_strcpy - update value
*@dest: value to be valueated
*@src: value to be evalueated
*Return: return 0
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
	l++;
	}
	for (; x < l; x++)
	{
	dest[x] = src[x];

	}
	dest[1] = '\0';
	return (dest);
	}
