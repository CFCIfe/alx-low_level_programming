#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory (Success), or NULL (Failure).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned char *p;
unsigned int i;
unsigned int total_size;

/* Check for valid input */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate the total size */
total_size = nmemb * size;

/* Allocate memory using malloc */
ptr = malloc(total_size);

/* Check if allocation was successful */
if (ptr == NULL)
return (NULL);

/* Set the allocated memory to zero */
p = ptr;
for (i = 0; i < total_size; i++)
p[i] = 0;

return (ptr);
}
