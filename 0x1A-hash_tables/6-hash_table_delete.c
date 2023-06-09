#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: the table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; ht->array != NULL &&  i < ht->size; i++)
		delete_node(ht->array[i]);

	free(ht);
}

/**
 * delete_node - recursively frees a linked list node
 * @node: node to free
 */
void delete_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	delete_node(node->next);
	free(node->value);
	free(node->key);
	free(node);
}
