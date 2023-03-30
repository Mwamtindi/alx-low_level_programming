#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: give the address of the list
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t nod = 0;

	while (curr != NULL)
	{
		nod++;
		curr = curr->next;
	}

	return (nod);
}
