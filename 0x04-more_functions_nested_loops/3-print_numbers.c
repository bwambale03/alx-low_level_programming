#include "main,h"
/**
 * print_numbers - printing numbers from zero to nine
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
