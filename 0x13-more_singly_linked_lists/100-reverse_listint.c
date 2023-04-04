#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the pointer to the head of listint_t linked list
 * Return: pointer to the first node of the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *revs = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;

		(*head)->next = revs;

		revs = *head;

		*head = next;
	}

	*head = revs;
	return (*head);
}
