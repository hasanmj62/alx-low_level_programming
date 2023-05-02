#include "list.h"

/**
* free_listint - set the linked list free !
* @head: listint_t the list which will be freed.
*
*/

void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
