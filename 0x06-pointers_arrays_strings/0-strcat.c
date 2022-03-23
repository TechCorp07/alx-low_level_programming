#include "main.h"

/**
 * _strcat - main function to string concetratenate
 * @dest: destination string
 * @src: source string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	size_t i;
	size_t n = strlen(dest);

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n+i] = '\0';

	return (dest);
}
