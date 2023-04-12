#include "search_algos.h"

/**
 * jump_search - search for a number using jump search algorithm
 * @array: input array
 * @size: the size of the array
 * @value: the value to seaach
 * Return: index of the founded value, or -1 when the values is not present
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int prev = 0, current = 0;

	if (array == NULL)
		return (-1);
	while (array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		current = current + step;
		if (current >= size)
		{
			break;
		}
	}
	prev = current - step;
	printf("Value found between indexes [%d] and [%d]\n", prev, current);
	while (prev <= current)
	{
		if (prev >= size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;

	}
	return (-1);
}
