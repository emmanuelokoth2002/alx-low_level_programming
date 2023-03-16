#include "lists.h"

/**
 * free_dlistint - free double list
 * @head: doubly linked list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new = head, *next = NULL;

	while (new != NULL)
	{
		next = new->next;
		free(new);
		new = next;
	}
}
