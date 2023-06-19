#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a dog structure
 * @d: Pointer to the dog structure to be printed
 *
 * Description: This function prints the name, age, and owner of a dog.
 *              If an element is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
