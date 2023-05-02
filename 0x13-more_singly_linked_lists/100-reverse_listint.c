#include "lists.h"

/**
* reverse_listint - I will reverses a linkeds
* @head: we will pointer to the first node in the list
*
* Return: pointer to the first node in the new lists
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
