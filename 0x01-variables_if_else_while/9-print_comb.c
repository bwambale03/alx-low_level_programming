#include<stdio.h>
#include<stdlib.h>
/**
 * main - Possible combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 0; b <= 20; b++)
	{
		putchar((b + '0'));
		if (b <= 19)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
