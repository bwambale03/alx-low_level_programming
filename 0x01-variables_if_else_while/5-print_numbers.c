#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - printing singer digit numbers less than ten
 * and starting from zero
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d\n", num);
	}
	printf("\n");
	return (0);
}
