#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *unsignedKey;
	int i = 0;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL || value == NULL)
		return (0);
	index = key_index(key, ht->size);
	if (ht->size == 0)
		return (0);/* this could be (1) if it is considered a success*/
	if (ht->array == NULL)
		return (0);

	if (ht->array[index] != NULL)
	{
		while(i < ht->size && ht->array[i] != NULL)
			i++;

		if (i == ht->size)
			return (0);
		index = i;
	}

	ht->array[index] = malloc(sizeof(hash_node_t));
	ht->array[index]->value = malloc(strlen(value) + 1);
	strcpy(ht->array[index]->value, value);

	ht->array[index]->key = malloc(strlen(key) + 1);
	strcpy(ht->array[index]->key, key);

	return (1);
}
