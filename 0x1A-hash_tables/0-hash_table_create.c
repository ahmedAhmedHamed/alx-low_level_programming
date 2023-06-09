#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: the size of the array
 * Return: a new hastable on success, null on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *newTable = NULL;

	newTable = malloc(sizeof(hash_table_t));

	if (newTable == NULL)
		return NULL;
	newTable->array = malloc(sizeof(hash_node_t) * size);

	if (newTable->array == NULL)
	{
		free(newTable);
		return NULL;
	}

	newTable->size = size;
	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;

	return (newTable);
}
