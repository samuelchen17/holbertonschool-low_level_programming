#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - delete ht
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current, *tmp;
unsigned long int i = 0;

if (!ht)
return;

/* go through each index and node and free */
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];

/* free linked list */
while (current)
{
tmp = current->next;

free(current->key);
free(current->value);
free(current);

current = tmp;
}
}

free(ht->array);
free(ht);
}
