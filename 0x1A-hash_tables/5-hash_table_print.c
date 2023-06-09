#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printFlag = 0;

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
			printf("'%s':'%s'", ht->array[i]->key, ht->array[i]->value);

			printFlag = 1;
		}
	printf("}\n");
}
