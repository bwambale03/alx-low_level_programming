#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: char to be checked
 *
 * Return: 1 if the char if c is a letter, otherwise 0 .
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
}
