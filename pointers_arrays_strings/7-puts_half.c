#include "main.h"

/**
 * puts_half - Entry point
 * @str: variable str
 *
 */

void puts_half(char *str)
{
	int half;
	int jng;

	half = 0;
	while (str[half] != '\0')
	{
		half++;
	}

	jng = half / 2;
	if (half % 2 == 1)
	{
		jng++;
	}

	while (jng < half)
	{
		_putchar(str[half]);
		jng++;
	}
	_putchar('\n');
}
