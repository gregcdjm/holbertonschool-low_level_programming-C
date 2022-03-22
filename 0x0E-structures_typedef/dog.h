#ifndef _dog
#define _dog

/**
 * struct dog - new struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: Define a new type dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
