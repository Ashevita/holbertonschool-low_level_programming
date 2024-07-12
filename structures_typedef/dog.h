#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 */

struct dog
{
	char *name; /* Nom du chien */
	float age; /* age du chien */
	char *owner; /* Propietaire du chien */
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
