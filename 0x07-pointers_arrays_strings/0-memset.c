#include "main.h"

/**
* _memset - files a memory block with a constant byte
* @s: address to memory block
* @b: char to be used
* @n: number of bytes to be used
*
* Return: pointer to the memory block
*/

char *_memset(char *s, char b, unsigned int n)
{

	int size = n; /* only accept positive sizes */
	if (size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
	s[i] = b;
	}
	
	return (s);
}
