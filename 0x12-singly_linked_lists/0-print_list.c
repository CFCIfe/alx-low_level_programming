#include <stddef.h>
#include "lists.h"

int _putchar(char c);

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
_putchar('\n');
}
else
{
unsigned int len = h->len;
char *str = h->str;

_putchar('[');
while (len / 10)
{
_putchar(len % 10 + '0');
len /= 10;
}
_putchar(len + '0');
_putchar(']');
_putchar(' ');
_putchar(str[0]);
_putchar(str[1]);
_putchar(str[2]);
_putchar(str[3]);
_putchar(str[4]);
_putchar('\n');
}

h = h->next;
count++;
}

return (count);
}
