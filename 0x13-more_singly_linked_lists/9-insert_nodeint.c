#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a given position in a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Data value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current;
unsigned int i;

if (head == NULL)
return (NULL);

if (idx == 0)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;

for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}

if (current == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
