#include<stdio.h>
/**
 * main - a character in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++);
	{
		for (uc = 'A'; uc <= 'Z'; uc++);
		{
			putchar ("uc\n");
		}
		putchar ("lc\n");
	}
	putchar ("\n");
}
