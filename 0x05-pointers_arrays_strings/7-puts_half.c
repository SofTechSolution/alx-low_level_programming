#include <stdio.h>
#include "main.h"

/**
* puts_half - prints a string
* @str: string to print
*
* Return: nothing
*/

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
