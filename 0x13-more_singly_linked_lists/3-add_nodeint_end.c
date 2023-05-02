#include "lists.h"

/**
* add_nodeint_end - we need to add a node at the end of list
* @head: p in the first element in list
* @b: data to insert in the new element
* Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int b)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->b = b;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
