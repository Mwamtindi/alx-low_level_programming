#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - fxn that frees a listint_t list
 * @head: the pointer to the head of listint_t list
 * Return: Nothing!.
 */

void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
