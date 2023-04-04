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

	neod = malloc(sizeof(listint_t));
	if (neod == NULL)
		return (NULL);

	neod->n = n;
	if (idx == 0)
	{
		neod->next = pet;
		*head = neod;
		return (neod);
	}

	for (e = 0; e < (idx - 1); e++)
	{
		if (pet == NULL || pet->next == NULL)
			return (NULL);
		pet = pet->next;
	}
	neod->next = pet->next;
	pet->next = neod;

	return (neod);
}
