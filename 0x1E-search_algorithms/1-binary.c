#include "search_algos.h"

/**
 * binary_search - search a value in to ordered array
 * @array: integer array
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index with value matched or -1 otherwise
*/

int binary_search(int *array, size_t size, int value)
{
	size_t ini, end;
	int i;

	if (array == NULL)
		return (-1);
	ini = 0;
	end = size - 1;
	i = (ini + end) / 2;
	while (ini <= end)
	{
		print_array(array, ini, end);
		i = (ini + end) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
		{
			end = i - 1;
		}
		else
		{
			ini = i + 1;
		}
	}
	return (-1);
}

/**
 * print_array - search a value in to ordered array
 * @array: integer array
 * @ini: initial index to print
 * @end: end index to print
*/

void print_array(int *array, size_t ini, size_t end)
{
	size_t i, sw = 0;

	printf("Searching in array: ");

	for (i = ini; i <= end; i++)
	{
		if (sw == 0)
		{
			printf("%d", array[i]);
			sw = 1;
		}
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}
