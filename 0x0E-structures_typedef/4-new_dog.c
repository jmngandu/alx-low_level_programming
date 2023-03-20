#include "dog.h"
/**
 * _strdup - returns a pointer to space in memory containing copy of string.
 * @s: pointer to the string.
 * Return: Pointer to a string stored in memory.
 */
char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);
/*Get the length of the string.*/
	while (s[i] != '\0')
		i += 1;
/*+1 to include the terminating character in size.*/
	i++;

	dup = malloc(i * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (j < i)
	{
		dup[j] = s[j];
		j++;
	}
	return (dup);
}




/**
 *new_dog - create an instance of struct dog.
 *@name:firt argument.
 *@age:second argument.
 *@owner: Third argument.
 *Return: instance of struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(struct dog));

	if (newdog == NULL)
		return (NULL);
/*Assign name element of new struct to the copy of name.*/
	newdog->name = _strdup(name);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
/*Assgin owner element of new struct to the copy of ownwer.*/
	newdog->owner = _strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->age = age;

	return (newdog);
}
