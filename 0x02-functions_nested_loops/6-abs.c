#include "main.h"
/**
 * _abs - computing the absolute value of an integer
 *
 * @n: the interger value of absolute number
 *
 * Return: the absolute value of n integer
 */
int _abs(int n)
{
	if (n >= 0)
		_putchar(n);
	else
		_putchar(-n);
}
