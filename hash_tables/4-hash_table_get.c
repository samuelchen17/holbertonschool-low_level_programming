#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - gets value from hash table
 * @ht: hash table
 * @key: key to get value from
 * Return: value from the key or NULL if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx = 0;
hash_node_t *current;

if (!ht || !key || key[0] == '\0')
return (NULL);

idx = key_index((const unsigned char *)key, ht->size);
current = ht->array[idx];

while (current)
{
if (strcmp(current->key, key) == 0)
return (current->value);

current = current->next;
}

return (NULL);
}
