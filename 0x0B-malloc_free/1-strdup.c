#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0, i;

if (str == NULL)
return (NULL);

/* Calculate the length of the input string */
while (str[length] != '\0')
length++;

/* Allocate memory for the duplicate string */
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

/* Copy the string to the newly allocated memory */
for (i = 0; i < length; i++)
duplicate[i] = str[i];

duplicate[length] = '\0'; /* Add the null-terminating character */

return (duplicate);
}
