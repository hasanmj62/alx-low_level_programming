#include "lists.h"

/**
* add_nodeint - adding a new node at the begin of the linked list we create.
* @head: pointing to the first NODE in the list.
* @n: Data to be inserted in the new code we make.
*
* Return: pointing to the new NODE , otherwise NULL if fail.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
