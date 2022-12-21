#include "main.h"
#include <stdio.h>
 /**
  * _strcpy - See description
  *
  * @src: char type string
  *
  * @dest: char type string
  *
  * Description: Copy the string pointed to by pointer 'src' to
  * the buffer pointed to by 'dest'
  *
  * Return: Pointer to *dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i] != '\0'; i++)
	{

		dest[i] = src[i];

	}

	dest[i] = '\0';

	return (dest);
}
