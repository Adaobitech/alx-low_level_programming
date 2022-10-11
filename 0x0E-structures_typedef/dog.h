#ifndef DOG_H
#define DOG_H

/**
 * struct dog - description of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This describes the properties of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_s;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_s *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
