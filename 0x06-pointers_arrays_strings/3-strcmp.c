#include "main.h"

/**
 * _strcmp - compress two strings
 * @s1: variable 1
 * @s2: variable 2
 * Return: returns integer
 */

int _strcmp(char *s1, char *s2)
{
	int sig;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		sig = -15;
	else if (*s1 > *s2)
		sig = 15;
	else
		sig = 0;
	return (sig);
}
