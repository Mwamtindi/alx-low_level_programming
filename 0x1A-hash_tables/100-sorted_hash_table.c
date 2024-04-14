#include "hash_tables.h"
#include "sorted_tables.h"


/**
 * shash_table_create - fxn that creates a sorted hash table
 * @size: size of the array
 * Return: pointer to  newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh;
	unsigned long int e;

	sh = malloc(sizeof(shash_table_t));
	if (sh == NULL)
		return (NULL);
	sh->size = size;
	sh->array = malloc(sizeof(shash_node_t *) * size);
	if (sh->array == NULL)
	{
		free(sh);
		return (NULL);
	}
	for (e = 0; e < size; e++)
		sh->array[e] = NULL;
	sh->shead = NULL;
	sh->stail = NULL;
	return (sh);
}

/**
 * shash_table_get - fxn that retrieves a value associated with a key
 * @ht: sorted hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn’t
 * be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - fxn that prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - fxn that prints a sorted hash table in reverse
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}
