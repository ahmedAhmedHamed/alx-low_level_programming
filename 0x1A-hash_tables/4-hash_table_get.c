#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: Returns the value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);

	element = ht->array[index];
	if (element == NULL)
		return (NULL);
	while (element != NULL && strcmp(key, element->key) != 0)
		element = element->next;
	if (element == NULL)
		return (NULL);
	return (strdup(element->value));
}
