#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int b;

	for (p = 0; p < 8; p++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[p][b]);
		_putchar('\n');
	}
}
