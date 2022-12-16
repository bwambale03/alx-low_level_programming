#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if char is upperase, otherwise 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar(c);
	}
	else
	{
		return (0);
	}
}
