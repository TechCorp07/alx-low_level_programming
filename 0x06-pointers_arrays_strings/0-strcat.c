#include "main.h"

/**
 * _strcat - main function to string concetratenate
 * @dest: destination string
 * @src: source string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; i < *(src) && src[i] != '\0' ; i++)
	{
		dest[*(src) + i] = src[i];
	}
	dest[*(src) + i] = '\0';

	return (dest);
}
