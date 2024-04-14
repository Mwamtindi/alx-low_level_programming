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
#endif
