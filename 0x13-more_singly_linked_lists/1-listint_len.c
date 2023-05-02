#include "lists.h"

/**
* listint_len - returns the number in a linked lists
* @h:list of type listint_t to traverse
*
* Return: number of node
*/

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
