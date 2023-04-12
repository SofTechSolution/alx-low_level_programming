#include "search_algos.h"

/**
 * jump_list -  function that searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: the list
 * @size: size of the list
 * @value: the value to search
 * Return:  a pointer to the first node where value is located | null otherwise
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL)
		return (NULL);

	unsigned int step = sqrt(size), ini = 0;
	listint_t *prev = NULL, *current = NULL;

	current = list;
	while (current->n < value && ini < size)
	{
		ini += step;
		prev = current;
		while (current->next && (ini != current->index))
			current = current->next;
		printf("Value checked at index [%li] = [%i]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev->index <= current->index)
	{
		if (prev->index >= size)
			break;
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
		if (!prev)
			break;
	}
	return (NULL);
}
