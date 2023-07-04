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
unsigned int len = h->len;
char *str = h->str;

if (str == NULL)
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
}
else
{
_putchar('[');
while (len / 10)
{
_putchar(len % 10 + '0');
len /= 10;
}
_putchar(len + '0');
_putchar(']');
_putchar(' ');
for (unsigned int i = 0; i < 5 && str[i] != '\0'; i++)
_putchar(str[i]);
}
_putchar('\n');

h = h->next;
count++;
}

return (count);
}
