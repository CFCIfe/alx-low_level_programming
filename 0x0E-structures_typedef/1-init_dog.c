#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner's name
 *
 * Description: This function initializes a struct dog variable with the provided
 * name, age, and owner values. It takes a pointer to the struct dog variable as
 * its parameter and assigns the values to the members of the structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
