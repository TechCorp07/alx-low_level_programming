#include <stdio.h>
#include <unistd.h>

/**
 * main - prints whats given in text form
 *
 * Return: 0 if properly closed
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
