#include "lists.h"

/**
* 0-print_listint.c - prints all the elements of linked lists
* @h: linked list of type listint_t to prints
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
