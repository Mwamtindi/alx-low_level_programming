#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the list
 * Return: Nothing!.
 */

void free_list(list_t *head)
{
	list_t *next, *curr = head;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}
