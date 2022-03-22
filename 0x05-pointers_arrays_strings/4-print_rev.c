# include "main.h"

/**
 * print_rev - prints reverse string
 * @s: pointer char
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	i = strlen(s);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
