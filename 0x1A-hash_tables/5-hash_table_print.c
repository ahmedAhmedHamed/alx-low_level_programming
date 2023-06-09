#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printFlag = 0;
	hash_node_t *printSlave = NULL;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (printFlag)
				printf(", ");
			print_node(ht->array[i]);
			while ((printSlave = ht->array[i]->next))
			{
				printf(", ");
				print_node(printSlave);
			}

			printFlag = 1;
		}
	printf("}\n");
}

/**
 * print_node - prints one node in a dictionary
 * @node: the node to be printed
 */
void print_node(const hash_node_t *node)
{
	printf("'%s': '%s'", node->key, node->value);
}
