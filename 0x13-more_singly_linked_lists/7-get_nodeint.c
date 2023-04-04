#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 * @index: the index of the node, starting at 0
 * Return: NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod = head;
	unsigned int q;

	for (q = 0; nod && q < index; q++)
		nod = nod->next;

	return (q == index ? nod : NULL);
}
