#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - dupe a string
 * @str: string to dupe
 *
 * Return: pointer to duped string, NULL if str is NULL or malloc fails
 */

char *_strdup(char *str)
{
int len = 0;
char *arr;
int i;
char *tmp = str;

if (str == NULL)
return (NULL);

while (*tmp != '\0')
{
len++;
tmp++;
}

arr = malloc(len + 1);

/* check malloc success */
if (arr == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
arr[i] = str[i];
}

return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = _strdup(name);
dog->age = age;
dog->owner = _strdup(owner);

/* free memory if allocation fails */
if (!dog->name || !dog->owner)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}

return (dog);
}
