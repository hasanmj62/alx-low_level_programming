#include "lists.h"

/**
* pop_listint - deleting the head node of the linked list.
* @head: the pointer to the first element at the linked list
* Return: the data inside the elements that was deleted .
* || 0  if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

	return (num);
}
