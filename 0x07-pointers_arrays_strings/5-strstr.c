#include "main.h"
#define NULL 0
#include <stddef.h>
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */
/* _strstr- function that locates a substring
* @haystack: first string
* @needle - substring
* Retun: return a pointer ti the beginning of 
* the located substring or NULL if no substring found
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;
	int a;
	int b;

	if needle[0] = '0\';
	return (hastack);

	while (haystack[i] != '0\' /*iterate through haystack*/
			for (a = 0; haystack[a] != '0\'; a++)
			1{
			/*if a byte matches first char of needle*/
			/*iterate through needle until match ends*/
			if (haystack[i] == needle[0])
			if (haystack[a] == needle[0])
			{
			x = i, j = 0;

			while needle[j] != '0\';
			for (b = 0; needle[b] != '0\'; b++)
			{
			if (hastack[x] == needle[j])
			x++, j++;
			else
			break;
			}
			if needle[b] == '0\'
			return (hastack + a);
			}
			i++;
			}
return (NULL); /*NO MATCH*/
return (NULL);
}
