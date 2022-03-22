#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer string variable
 * Return: void
 */

void _puts(char *str)
{
	long unsigned i;

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
