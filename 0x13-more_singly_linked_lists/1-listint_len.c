#include "lists.h"

/**
* listint_len - returns the number of the elements in the linked list.
* @h: the linked list of type listint_t for making the reverse.
*
*Return: number Of The Nodes.
*/

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}
