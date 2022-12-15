#include "main.h"
/**
 * times_table - printing the nine times table
 *
 */
void times_table(void)
{
	int num, prod, mult;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
			if (prod <= 9)
			_putchar((prod / 10) + '0');
			else
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
