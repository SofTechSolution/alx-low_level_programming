#include "main.h"

/**
* _memcpy - copies a memory area
* @dest memory area to be copied to
* @src memory area to be copied from
* @n: number of bytes to be copied
*
*Return: pointer to the copied memory block
*/

char *_memcpy(char, *dest, char *src, unsigned int n)
{
int size = n;

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
dest[i] = src[i];
}
return (dest);

}
