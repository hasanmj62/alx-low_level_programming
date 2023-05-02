#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a certain index in the linked list
* @head: the first node at the linked list.
* @index: the index of the NODE TO RETURN.
* Return: the POINTER to the node we trying to look for || NULL If.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
return (temp ? temp : NULL);
}
}
