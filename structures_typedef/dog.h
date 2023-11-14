#ifndef STRUCTURE_TYPEDEF

#define STRUCTURE_TYPEDEF

#define DOG
/**
 * struct dog - my first structure
 *
 * @name: name
 * @age : age
 * @owner : owner
 *
 * Description: it's my first struct
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

