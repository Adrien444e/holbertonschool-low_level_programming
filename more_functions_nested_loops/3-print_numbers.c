#include "main.h"

/**
 * print_numbers - Entry point
 * @a: variable a
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
