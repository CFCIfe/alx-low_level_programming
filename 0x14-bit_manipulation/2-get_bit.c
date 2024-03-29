#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

mask = 1 << index;
return ((n & mask) >> index);
}
