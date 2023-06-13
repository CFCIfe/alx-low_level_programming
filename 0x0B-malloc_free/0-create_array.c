#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and init it with a specific char
 * @size: The size of the array
 * @c: The char to initialize the array with
 *
 * Return: Pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

{
unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;
}

return (array);
}
