#include "search_algos.h"

/**
 * advanced_binary - search a value in to ordered array
 * @array: integer array
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index with value matched or -1 otherwise
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advanced_binary_rec(array, 0, size - 1, value));
}

/**
 * advanced_binary_rec - recursive function
 * @array: integer array
 * @ini: initial index
 * @end: final index
 * @value: the value to search
 * Return: the first index with value matched or -1 otherwise
*/
int advanced_binary_rec(int *array, size_t ini, size_t end, int value)
{
	int i = 0;

	print_array(array, ini, end);
	i = (ini + end) / 2;
	if ((array[i] == value) && (array[i - 1] != value))
		return (i);
	else if (ini == end)
		return (-1);
	else if (array[i] >= value)
		return (advanced_binary_rec(array, ini, i, value));
	else
		return (advanced_binary_rec(array, i + 1, end, value));
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
