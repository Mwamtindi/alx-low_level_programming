#include "hash_tables.h"

/**
 * hash_djb2 - fxn that implement the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int _hash;
	int h;

	_hash = 5381;
	while ((h = *str++))
	{
		_hash = ((_hash << 5) + _hash) + h;
	}
	return (_hash);
}
