#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - Structure for a linked list node
 * @n: Data value
 * @next: Pointer to the next node
 *
 * Description: Structure representing a node in a linked list of integers
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif
