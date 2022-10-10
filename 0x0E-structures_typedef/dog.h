#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;

/**
* struct dog - dog properties
* @name: string name of the dog
* @age: float age of the dog
* @owner: string name of the owner of the dog
*
* Description: Variables of the dog age, owner name and its name.
*/
struct dog
{
	/* data */
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(struct dog *d);
#endif /*DOG_H*/
