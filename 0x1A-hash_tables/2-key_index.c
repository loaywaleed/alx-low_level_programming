#include "hash_tables.h"

/**
 * key_index - Hash function that returns index of a key
 * @key: Key entered
 * @size: Size of the hash_table
 * Return: Index of the key entered
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
