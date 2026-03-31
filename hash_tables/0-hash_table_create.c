#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the array
 * Return: hashtable or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashtable;
unsigned long int i = 0;

/* allocate memory for hash table */
hashtable = malloc(sizeof(hash_table_t));
if (hashtable == NULL)
return (NULL);

/* set size of table */
hashtable->size = size;

/* allocate memory for the array of pointers */
hashtable->array = malloc(sizeof(hash_node_t *) * size);
if (hashtable->array == NULL)
{
free(hashtable);
return (NULL);
}

return (hashtable);
}
