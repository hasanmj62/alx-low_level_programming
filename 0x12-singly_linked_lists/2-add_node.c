#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adding a new node at the begging of the linked List
* @head: two pointer to the list_t list
* @str: new string to be added in the node.
*
* Return: the Adress of the new Element, or NULL if FAIL HAPPEN.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *p1;
unsigned int len = 0;
while (str[len])
len++;
p1 = malloc(sizeof(list_t));
if (!p1)
return (NULL);
p1->str = strdup(str);
p1->len = len;
p1->next = (*head);
(*head) = new;
return (*head);
}
