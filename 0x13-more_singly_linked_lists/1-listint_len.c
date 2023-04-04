#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: poionter to the head of the listint_t list
 * Return: number of elements(tally).
 */

size_t listint_len(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		tally = tally + 1;
		h = h->next;
	}
	return (tally);
}
