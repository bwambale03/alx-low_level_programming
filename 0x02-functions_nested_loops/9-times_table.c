#include "main.h"
/**
 * times_table - printing a nine times table
 *
 * Return:Nine times table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(',');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
						}
						_putchar('\n');
						}
						}
