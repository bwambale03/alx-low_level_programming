#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: string
 *
 * @src: string
 *
 * @n: number of elements to concatenate in
 *
 * Return: pointer to resulting `dest`
 */

{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
