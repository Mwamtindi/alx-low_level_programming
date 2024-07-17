#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the jump search algorithm
 * @list: The pointer to the  head of the linked list to be searched
 * @size: The number of nodes in the sorted list of integers
 * @value: The value to search for
 *
 * Return: NULL If the value is not present or the head of the list is NULL
 * Otherwise, a pointer to the first node where the value is located
 *
 * Desc: Prints a value every time it is compared in the list
 * Uses square root of the list size as the jump step
 */
listint_t *jump_list(listint_t *list, size_t size, int value)

{
	size_t mv, mv_size;
	listint_t *nd, *jp;

	if (list == NULL || size == 0)
		return (NULL);

	mv = 0;
	mv_size = sqrt(size);
	for (nd = jp = list; jp->index + 1 < size && jp->n < value;)
	{
		nd = jp;
		for (mv += mv_size; jp->index < mv; jp = jp->next)
		{
			if (jp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jp->index, jp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nd->index, jp->index);

	for (; nd->index < jp->index && nd->n < value; nd = nd->next)
		printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);
	printf("Value checked at index [%ld] = [%d]\n", nd->index, nd->n);

	return (nd->n == value ? nd : NULL);
}
