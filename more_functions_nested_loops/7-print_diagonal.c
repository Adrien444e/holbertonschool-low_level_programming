#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @n: variable n
 *
 */

void print_diagonal(int n)
{
	int diag;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < diag; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
