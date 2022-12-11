#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - assigning a random number to a variable
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %x\n");
	x = n % 10;

	if (x > 5)
	{
		printf("and is reater than 5\n");
	}
	if (x == 0)
	{
		printf("and is zero\n");
	}
	if (x < 6 && != 0)
	{
		printf("and is less than  and not zero\n");
	}
	printf("\n");

	return (0);
}
