#include<stdio.h>
/**
 * main - a program that prints alphabets in lowercase followed by
 * a new line
 * Reurn: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);
	}
	putchar("\n");
	return (0);
}

