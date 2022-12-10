#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char la, q, e;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}
	putchar('\n');
	return (0);
}

