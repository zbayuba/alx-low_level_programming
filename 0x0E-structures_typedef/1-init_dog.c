#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: pointer to dog struct to initialize
 * @name: string for dog name
 * @age: float for dog age
 * @owner: string for dog owner name
 *
 * Return: void
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

#endif
