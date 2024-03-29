#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to the newly created array (Success),
 *         or NULL if min > max or if malloc fails (Failure).
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

/* Check if min > max */
if (min > max)
return (NULL);

/* Calculate the size of the array */
size = max - min + 1;

/* Allocate memory for the array */
arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}
