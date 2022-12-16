#include "main.h"
/**
 * print_triangle - printing a triangle
 *@size: sze of the triangle
 * Return: no return
 */
void print_triangle(int size)
{
	int i, j;

	for (i = '0'; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		for (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}