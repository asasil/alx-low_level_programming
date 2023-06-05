#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m = 0;
	int n = 0;

	while (m < 8)
	{
		while (n < 8)
		{
			_putchar(a[m][n]);
		_putchar('\n');
		n++;
		}
		m++;
	}
}

