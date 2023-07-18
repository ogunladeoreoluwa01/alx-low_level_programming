#ifndef DOH_H
#define DOH_H
#include <stdio.h>
#include "dog.h"

/**
 * struct dog - defines a new type of struct called dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 2.5;
	my_dog.owner = "Alice";

	print_dog(&my_dog);

	return 0;
}
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
