#include "main.h"

/**
 * print_rev - Entry point.
 * @s: variable s
 *
 */

void print_rev(char *s)
{
	int chaine;
	int inv;

	while (s[chaine] != '\0')
	{
		chaine++;
	}

	for (inv = chaine -1; inv >= '\0'; inv--)
	{
		_putchar(s[inv]);
	}
	_putchar('\n');
}
