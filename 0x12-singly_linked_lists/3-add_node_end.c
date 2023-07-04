#include <stddef.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added as the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node;
char *dup_str;
size_t len = 0;

while (str[len] != '\0')
len++;

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new_node;
return (new_node);
}
