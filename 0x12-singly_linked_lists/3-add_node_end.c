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

    /* Count the length of the string */
    while (str[len] != '\0')
        len++;

    /* Duplicate the string */
    dup_str = strdup(str);
    if (dup_str == NULL)
        return NULL;

    /* Create a new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        free(dup_str);
        return NULL;
    }

    /* Set the data of the new node */
    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    /* Find the last node in the list */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Append the new node at the end of the list */
    last_node->next = new_node;

    return new_node;
}
