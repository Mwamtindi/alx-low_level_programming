#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of a listint_t linked list
 * Return: 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int tot = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		tot += curr->n;
		curr = curr->next;
	}

	return (tot);
}
