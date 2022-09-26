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
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
