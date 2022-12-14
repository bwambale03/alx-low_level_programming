#include "main.h"
/**
 * print_alphabet_x10 - printing ten times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b <= 10)
			_putchar(b);
		_putchar('\n');
	}
}
