#include "main.h"
/**
 * print_line - draws  straight line in the terminal
 * @n: number of times the character _  should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = '0'; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
