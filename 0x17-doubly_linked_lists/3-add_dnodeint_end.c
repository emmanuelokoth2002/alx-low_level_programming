#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of list
 * @head: last node
 * @n: input data
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));
	dlistint_t *temp = NULL;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	if (*head)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		new->next = NULL;
		new->prev = temp;
		temp->next = new;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
