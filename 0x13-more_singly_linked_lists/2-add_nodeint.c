#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the starting point of a listint_t list
 * @head: pointer to the head of the listint_t list
 * @n: number to be added in the new node
 * Return: address of new element else NULL if fxn failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neod;

	neod = malloc(sizeof(listint_t));
	if (neod == NULL)
		return (NULL);

	neod->n = n;
	neod->next = *head;
	*head = neod;

	return (neod);
}


