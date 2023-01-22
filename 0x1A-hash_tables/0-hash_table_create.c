#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of specific size
 * @size: The size of the array used.
 *
 * Return: a pointer to the newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table)
	{
		table->size = size;
		table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t));

		if (!table->array)
		{
			free(table);
			return (NULL);
		}

		while (i < table->size)
		{
			table->array[i] = NULL;
			i++;
		}
	}

	return (table);
}
