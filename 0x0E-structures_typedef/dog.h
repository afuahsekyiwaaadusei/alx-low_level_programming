#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct about a puppy.
 *@name: name of puppy.
 *@age: age of puppy.
 *@owner: owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
