#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @i: the number
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int b;

	if (i < 0)
		i = -i;
	b = i % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');

	return (b);
}
