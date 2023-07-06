#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast, *loop;
size_t count = 0;
if (head == NULL)
return (0);
slow = head;
fast = head->next;
while (fast != NULL && fast->next != NULL)
{
if (slow == fast)
break;
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
fast = fast->next->next;
}
if (slow == fast)
{
loop = slow;
count++;
}
else
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
return (count);
}
slow = head;
while (slow != loop)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
slow = slow->next;
}
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)loop, loop->n);
count++;
return (count);
}
