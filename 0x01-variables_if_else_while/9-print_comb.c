#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int ascii_0;
	int ascii_9;
	int i;
	int ascii_comma;
	int ascii_space;
	int ascii_newline;

	ascii_comma = 44;
	ascii_space = 32;
	ascii_newline = 10;
	ascii_0 = 48;
	ascii_9 = 57;

	i = ascii_0;
	while (i <= ascii_9)
	{
		putchar(i);
		if (i != ascii_9)
		{
			putchar(ascii_comma);
			putchar(ascii_space);
		}
		i++;
	}
	putchar(ascii_newline);

	return (0);
}
