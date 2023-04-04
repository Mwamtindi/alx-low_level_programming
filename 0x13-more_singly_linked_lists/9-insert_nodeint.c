#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given postion
 * @head: pointer to the head at a given position in the list
 * @idx: the index of the list where the new node should be added
 * @n: integer to be stored
 * Return: Null if it failed, otherwise address of new node is returned.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int e;
	listint_t *neod, *pet = *head;

	if (!head)
		return (NULL);
	if (idx == 0)
		return (add_nodeint_end(head, n));
	for (e = 0; e < idx - 1; e++)
	{
		if (!pet)
			return (NULL);
		pet = pet->next;
	}

	neod = malloc(sizeof(listint_t));
	if (!neod)
		return (NULL);

	neod->n = n;
	neod->next = pet->next;
	pet->next = neod;

	return (neod);
}
