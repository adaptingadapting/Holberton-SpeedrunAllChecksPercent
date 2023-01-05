#include "hash_tables.h"

/**
 * hash_table_set - creates a node in the ht
 * @ht: hash table i want to add to
 * @key: key
 * @value: value
 * Return: return 1 on succes 0 on failure
 */

int hash_table_set(hash_table_t *ht, const unsigned char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *node = NULL;
	char *dup_value;

	if (!ht || !key)
		return (0);
	key_idx = key_index(key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = (unsigned char *)key;
	node->value = strdup(value);
	if (!node->value)
		return (0);

	if (!(ht->array[key_idx]))
	{
		ht->array[key_idx] = node;
		node->next = NULL;
		return (1);
	}
	else
	{
		node->next = ht->array[key_idx];
		ht->array[key_idx] = node;
		return (1);
	}
	return (0);
}
