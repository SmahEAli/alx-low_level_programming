#include "hash_tables.h"

/**
 * key_index - func get index of a key
 * @key: key string
 * @size: size of array
 * Return: index at which the key/value pair should be stored hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
