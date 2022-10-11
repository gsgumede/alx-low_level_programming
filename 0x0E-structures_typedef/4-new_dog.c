#include "dog.h"
#include<stddef.h>
#include<stdlib.h>

void copy_strin(char *src, char *dst, int len);
int get_len(char *s);

/**
 * get_len - calculates the length of the string
 *
 * @s: string to be calculated
 * Return: length of the string
 */
int get_len(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * copy_strin - copies the contents of the string
 *
 * @src: address of the source string
 * @dst: address of the destination string
 * @len: length of the string
 * Return: Address to the first element in the destination element
*/
void copy_strin(char *src, char *dst, int len)
{
	int i;

	for (i = 0; i <= len; i++)
	{
		*(dst + i) = *(src + i);
	}

}

/**
 * new_dog - creates new dog
 *
 * @name: name of the dog
 * @age: float age of the dog
 * @owner: string name of the dog
 * Return: address to the dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = malloc(sizeof(char) * (get_len(name) + 1));
	new_d->owner = malloc(sizeof(char) * (get_len(owner) + 1));
	if (new_d->name == NULL || new_d->owner == NULL)
	{
		if (new_d->name == NULL)
			free(new_d->owner);
		if (new_d->owner == NULL)
			free(new_d->name);
		free(new_d);
		return (NULL);
	}
	copy_strin(name, new_d->name, get_len(name));
	copy_strin(owner, new_d->owner, get_len(name));
	new_d->age = age;
	return (new_d);
}

