#include "main.h"
/**
 * print_sign - pnritng the sign of a number
 * @n: the integer value
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is 0
 * -1 and prints - if n is less than 0
 */
int print_sign(int n)
{
	if (n > '0')
	{
		if (n == 0)
		{
			_putchar(0);
			return (0);
		}
		if (n < 0)
		{
			_putchar(-);
			return (-1);
		}
	}
	_putchar(+);
	return (1);
}
