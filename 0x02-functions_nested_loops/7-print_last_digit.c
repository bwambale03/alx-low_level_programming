#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @i: the number
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int ln = i % 10;

	for (ln < 0)
		_putchar(ln + '0');
	return (ln);
}
