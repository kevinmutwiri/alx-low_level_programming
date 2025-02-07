#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, except q and e.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
	putchar('\n');

	return (0);
}
