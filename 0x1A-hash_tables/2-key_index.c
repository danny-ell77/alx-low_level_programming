#include "hash_table.h"

/**
 * key_index - computes the index of a key
 * @key: The key to the hash node
 * @size: the size of the array
 *
 * Return: the index for the key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
