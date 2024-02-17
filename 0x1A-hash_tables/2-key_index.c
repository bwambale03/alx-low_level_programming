#include "hash_tables.h"

/**
 * Author: Aanuoluwapo Shodipo
 * Date Created: 08/04/2023
 * Last Modified: 08/04/2023
 *
 * Description
 * A function that gives you the index of a key.
 *
 * Usage
 * key_index - Get the index at which a key/value pair should
 * be stored in array of a hash table.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
