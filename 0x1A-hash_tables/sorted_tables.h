#ifndef SORTED_TABLES_H
#define SORTED_TABLES_H

/**
 * shash_table_delete - fxn that deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *tmp2;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	while (tmp)
	{
		tmp2 = tmp;
		tmp = tmp->snext;
		free(tmp2->key);
		free(tmp2->value);
		free(tmp2);
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_set - fxn thats adds an element to the sorted hash table
 * @ht: sorted hash table to add or update the key/value to
 * @key: key to add to the sorted hash table
 * @value: value to add to the sorted hash table
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(new->key, ht->shead->key) < 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(new->key, tmp->snext->key) > 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

#endif
