#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
