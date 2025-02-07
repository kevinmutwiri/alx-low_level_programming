#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
