#include "hash_tables.h"

/**
 * key_index - gets key index
 * @key: key to be used
 * @size: hash table array size
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
