/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog variable
 *
 * Description: This function prints the values of the name, age, and owner
 * members of a struct dog. If any member is NULL, it prints "(nil)" instead
 * of the actual value.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
