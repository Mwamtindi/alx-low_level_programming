#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - fxn that prints a listint_t linked list
 * @head: pointer to the head of listint_t linked list
 * Return: number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *beko, *sung;

	beko = head;
	sung = head;

	if (head == NULL)
		exit(98);

	while (beko && sung && sung->next)
	{
		beko = beko->next;
		sung = sung->next->next;
		if (beko == sung)
		{
			printf("-> [%p] %d\n", (void *)beko, beko->n);
			return (0);
		}
		printf("[%p] %d\n", (void *)beko, beko->n);
	}
	printf("[%p] %d\n", (void *)beko, beko->n);
	beko = beko->next;
	while (beko && sung && sung->next)
	{
		printf("[%p] %d\n", (void *)beko, beko->n);
		beko = beko->next;
		sung = sung->next->next;
	}
	printf("[%p] %d\n", (void *)beko, beko->n);
	return (0);
}
