#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated
 * @key: with this key
 * @ht: hash table to get value from
 * Return: returns the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *aux = NULL;

	if (!ht)
		return (NULL);
	key_idx = key_index(key, ht->size);
	aux = ht->array[key_idx];
	for (;aux; aux = aux->next)
		if (!strcmp(key, aux->key))
			return (aux->value);
	return (NULL);
}
