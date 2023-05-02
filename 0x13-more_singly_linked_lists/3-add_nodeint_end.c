#include "lists.h"

/**
* add_nodeint_end - adding a NODE at the End of the linked list
* @head: pointing to the first ELEMENT on the list.
* @n: Data to Insert to the new ELEMENT
*
* Return: pointing the new NODE , otherwise NULL IF FAIL.
*/

listint_t *add_nodeint_end(listint_t **head, const int m)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)

return (NULL);
new->n = n;
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
