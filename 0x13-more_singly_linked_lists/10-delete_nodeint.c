#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *                           of a listint_t linked list
 * @head: pointer to the head of a listint_t list
 * @index: the index of the node that should be deleted
 * Return: -1 if it failed, else 1 if it succeeded.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int u;
	listint_t *pedo, *neto, *pet;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		pet = *head;
		*head = (*head)->next;
		free(pet);
		return (1);
	}

	pedo = *head;
	neto = (*head)->next;

	for (u = 1; neto != NULL && u < index; u++)
	{
		pedo = neto;
		neto = neto->next;
	}

	if (neto == NULL)
		return (-1);
	pedo->next = neto->next;
	free(neto);

	return (1);
}
