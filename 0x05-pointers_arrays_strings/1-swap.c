#include "main.h"
/**
 * swap_int - swamps the values of two integers
 * @a: pointer value of a int
 * @b: pointer value of b int
 * @c: pointer value of c int
 * Return:Always zero
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
