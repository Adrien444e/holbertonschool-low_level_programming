#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line
 * @size: is the size of the square
 */

void print_square(int size)
{
	int square;
	int mult;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (square = 0; square < size; square++)
		{
			for (mult = 1; mult < size; mult++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
