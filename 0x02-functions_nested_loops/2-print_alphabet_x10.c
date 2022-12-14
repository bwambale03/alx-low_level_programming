#include "main.h"
/**
 * print_alphabet_x10 - printing ten times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char b;
	int count = 0;

	while (count <= 10)
	{
		for (b = 'a'; b <= 'z'; b++)
	{
			_putchar(b);
		_putchar('\n');
	}
	}
}
