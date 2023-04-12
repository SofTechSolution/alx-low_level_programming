#include "search_algos.h"

/**
 * interpolation_search - search a value in to ordered array with interpolation
 * @array: integer array
 * @size: number of elements in array
 * @value: the value to search
 * Return: the first index with value matched or -1 otherwise
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	mid = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
	while ((array[high] != array[low]) && (value >= array[low]) &&
		(value <= array[high])) {
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
		(value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
