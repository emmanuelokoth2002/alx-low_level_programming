#include "lists.h"

/**
 * print_dlistint - print elements of a dlistint_t
 * @h: pointer to the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
