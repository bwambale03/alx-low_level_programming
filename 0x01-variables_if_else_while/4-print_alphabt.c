#include<stdio.h>
/**
 * main - printing alphabets in lowercase
 *
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

