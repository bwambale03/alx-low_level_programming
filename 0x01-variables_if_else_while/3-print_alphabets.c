#include<stdio.h>
/**
 * main - a character in lowercase and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar("ch\n");
	return (0);
}
