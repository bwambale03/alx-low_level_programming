#include "main.h"
#define NULL 0
#include <stddef.h>

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

/* _strstr - function that locates a substring
* @haystack : first string
* @needle : substring
* Return : return a pointer to the beginning of the
* located substring or NULL if no substring found.
* /
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;
	int a;
	int b;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	for (a = 0; haystack[a] != '\0'; a++)
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */

		if (haystack[i] == needle[0])
		if (haystack[a] == needle[0])
		{
			x = i, j = 0;

			while (needle[j] != '\0')
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[x] == needle[j])
				x++, j++;

				else
				break;
			} /* if matched throughout, return haystack */

			if (needle[j] == '\0')
			{
				return (haystack + i);
				if (haystack[a + b] != needle[b])
					break;
			}
			if (needle[b] == '\0')
				return (haystack + a);
		}

		i++;
	}
	return (NULL); /* No match */
	return (NULL);
}
