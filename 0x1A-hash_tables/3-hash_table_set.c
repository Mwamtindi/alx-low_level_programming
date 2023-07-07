#include "hash_tables.h"

/**
 * make_hash_node - fxn that creates a new hash node
 * @key: the key for the node
 * @value: the value for the node
 *
 * Return: the new node, or NULL if fails
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *_node;

	_node = malloc(sizeof(hash_node_t));
	if (_node == NULL)
		return (NULL);
	_node->key = strdup(key);
	if (_node->key == NULL)
	{
		free(_node);
		return (NULL);
	}
	_node->value = strdup(value);
	if (_node->value == NULL)
	{
		free(_node->key);
		free(_node);
		return (NULL);
	}
	_node->next = NULL;
	return (_node);
}


/**
 * hash_table_set - fxn that sets a key to a value in the hash table
 * @ht: hash table to add element to it
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *hash_node, *temp;
	char *_new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	indx = key_indx((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			_new_value = strdup(value);
			if (_new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = _new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[indx];
	ht->array[indx] = hash_node;
	return (1);
}
