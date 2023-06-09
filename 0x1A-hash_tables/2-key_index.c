#include "hash_tables.h"

/**
 * key_index - gets the index of they key in an array of size size
 * @key: the key to hash
 * @size: size of the hashtable
 * Return: the index to store the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key)) % size;
}
