#include "lists.h"

/**
* reverse_listint - reverses the linked lists
* @head: the pointer to the first node at list
*
*
* Return: POINTER to the first NODE AT the new list.
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
