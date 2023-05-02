#include "lists.h"

/**
* add_nodeint - make a new node in beginning of a linked lists
* @head: pointer to the first node
* @a: data to insert in that new node
* Return: pointer new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int a)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->a = a;
	new->next = *head;
	*head = new;

	return (new);
}
