#include <stdio.h>

/**
 * main - Print the alphabet in lowercase then uppercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c_lower;
	char c_upper;

	c_lower = 'a';
	while (c_lower <= 'z')
	{
		putchar(c_lower);
		c_lower++;
	}

	c_upper = 'A';
	while (c_upper <= 'Z')
	{
		putchar(c_upper);
		c_upper++;
	}
	putchar('\n');

	return (0);
}
