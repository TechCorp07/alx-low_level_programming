#include "main.h"

/**
 * reverse-array - prints the string in reverse
 * @a: integer
 * @n: integer
 * Return: always zero 0
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (n >= 0)
	{
		if (i != 0)
		{
			printf(",");
		}
		if (a[n] != '\0')
			printf("%d", a[n]);
		i++;
		n--;
	}
	printf("\n");
}
