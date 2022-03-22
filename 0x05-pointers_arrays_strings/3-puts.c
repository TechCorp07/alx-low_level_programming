#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer string variable
 * @i: integer variable
 * Return: Always run zero
 */

void _puts(char *str)
{
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
			_putchar(str[i]);
}
