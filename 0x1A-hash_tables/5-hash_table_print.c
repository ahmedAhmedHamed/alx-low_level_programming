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
		return;
	printf("{");
	for (i = 0; ht->array != NULL && i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (printFlag)
				printf(", ");
			print_node(ht->array[i]);
			printSlave = ht->array[i];
			while ((printSlave = printSlave->next))
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
