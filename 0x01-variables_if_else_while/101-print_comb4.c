#include <stdio.h>
/**
 * Main - Entry point
 *
 * codes for printing all posible combination of two d/t digits
 *
 * in assending order and seperation by a comma following by a space
 *
 * Return: Always 0 success
 */
int main(void)

{	
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = diigit1 + 1; digit2 < 10; digit2++)
		{
		for (digit3 = digit2 + 1; digit3 < 10; digit3++)
		{
		putchar ((digit1 % 10) + '0');
		putchar ((digit2 % 10) + '0');
		putchar ((digit3 % 10) + '0');

		iif (digit1 == 7 && digit2 == 8 && digit3 == 9)
			continue;

		putchar(',');
		putchar(' ');

		}
		}
		}
putchar('\n');
return (0);
}