#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: chessboard matrix
 */
void print_chessboard(char (*a)[8])
{
	int i, n = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			n = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - n]);
	}
	_putchar('\n');
}

