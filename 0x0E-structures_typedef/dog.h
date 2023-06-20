#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Structure representing a dog with its name, age, and owner.
 */
struct dog
{
char *name;  /* Name of the dog */
float age;   /* Age of the dog */
char *owner; /* Owner of the dog */
};

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the owner's name
 *
 * Description: This function inits a struct dog variable with the provided
 *name, age, and owner values. It takes a pointer to the struct dog
 *variable as its parameter and assigns the values to the members of
 *the structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog_t - Typedef for struct dog
 * @d: Pointer to the struct dog variable to initialize
 */
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
