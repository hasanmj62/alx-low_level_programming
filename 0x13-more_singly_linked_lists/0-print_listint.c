#include "lists.h"

/**
* print_listint - print all the ELEMENTS of the linked list we use.
* @h: linked list of the type of listint_t to print it .
*
* Return: number of the NODES/nodes.
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
