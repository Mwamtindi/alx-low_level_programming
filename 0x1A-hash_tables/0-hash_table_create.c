#include <stdlib.h>
#include hash_table_t
/**
 * hash_table_create - creates a hash table
 * @size:size of hash array
 * Return:NULL if hash_table is null
 * Otherwise return hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}
	return (hash_table);
}
