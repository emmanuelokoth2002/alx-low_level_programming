#include "lists.h"

/**
 * add_dnodeint - add new node at the beg
 * @head: pointer to node
 * @n: input data
 * Return: address of new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	if (*head != NULL)
	{
		temp->next = *head;
		temp->prev = NULL;
		temp->n = n;
	}
	if (*head == NULL)
	{
		temp->next = NULL;
		temp->prev = NULL;
		temp->n = n;
	}
	*head = temp;
	return (*head);
}
