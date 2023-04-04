#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - fxn that frees a listint_t list
 * @head: pointer to the head of the listint_t list
 * Return: Nothing!.
 */

void free_listint2(listint_t **head)
{
	listint_t *pet;

	if (head == NULL)
		return;

	while (*head)
	{
		pet = (*head)->next;
		free(*head);
		*head = pet;
	}
	head = NULL;
}
