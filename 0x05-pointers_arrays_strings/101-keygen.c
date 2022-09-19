#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid passwords
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r, i;
	time_t t;
	
	r = i = 0;
	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		r = rand() % 128;
		if ((i + r) > 2772)
			break;
		i += r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - i));
	return (0);
}

