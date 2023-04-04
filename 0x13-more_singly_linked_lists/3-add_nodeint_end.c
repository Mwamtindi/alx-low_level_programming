#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of a listint_t list
 * @n: integer to be stored at new node at the end
 * Return: NULL if it failed or address of the new element to be returned.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neod;
	listint_t *curr = *head;

	neod = malloc(sizeof(listint_t));
	if (!neod)
		return (NULL);
	neod->n = n;
	neod->next = NULL;

	if (!*head)
	{
		*head = neod;
		return (neod);
	}

	while (curr->next)
		curr = curr->next;
	curr->next = neod;
	return (neod);
}
