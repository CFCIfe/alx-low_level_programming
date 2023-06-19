#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner's name
 *
 * Return: Pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog != NULL)
{
int name_len = 0, owner_len = 0;
char *new_name, *new_owner;

while (name[name_len])
name_len++;
while (owner[owner_len])
owner_len++;

new_name = malloc(sizeof(char) * (name_len + 1));
new_owner = malloc(sizeof(char) * (owner_len + 1));

if (new_name != NULL && new_owner != NULL)
{
int i;

for (i = 0; i <= name_len; i++)
new_name[i] = name[i];
for (i = 0; i <= owner_len; i++)
new_owner[i] = owner[i];

new_dog->name = new_name;
new_dog->age = age;
new_dog->owner = new_owner;

return (new_dog);
}
else
{
free(new_name);
free(new_owner);
free(new_dog);
}
}
return (NULL);
}
