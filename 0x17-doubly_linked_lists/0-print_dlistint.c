#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes in list
*/
size_t print_dlistint(const dlistint_t *h)
{
	 size_t count = 0;
	 const dlistint_t *current = h;

	while (current != NULL)
	{
		 printf("%d\n", current->n);
		 current = current->next;
		 count++;
	}
	return (count);
}
