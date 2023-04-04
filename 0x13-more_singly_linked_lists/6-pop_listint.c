#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *               and returns the head node's data (n)
 * @head: pointer to the head of listint_t linked list
 * Return: 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *pet = *head;
	int t;

	if (*head == NULL)
		return (0);

	t = (*head)->n;
	*head = (*head)->next;
	free(pet);

	return (t);
}
