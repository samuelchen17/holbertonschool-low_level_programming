#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
{
unsigned long int i;
hash_node_t *current;
int first = 1;

if (!ht)
return;

printf("{");

/* iterate through each index */
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];

/* iterate through linked list at index */
while (current)
{
if (!first)
printf(", ");
printf("'%s': '%s'", current->key, current->value);
first = 0;
current = current->next;
}
}

printf("}\n");
}
}
