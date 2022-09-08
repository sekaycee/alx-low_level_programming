#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1 output to standard error
 */
int main(void)
{
	char quote[];
	quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	fprintf(stderr, quote);
	
	return (1);
}

