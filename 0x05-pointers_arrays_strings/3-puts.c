#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer string variable
 * Return: Always run zero
 */

void _puts(char *str)
{
	for (i = 0; i < strlen(str); i++)
			_putchar(str[i]);
}
