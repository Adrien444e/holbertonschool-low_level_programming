#include "main.h"

/**
 * rev_string - Entry point.
 * @s: variable s
 */

void rev_string(char *s)
{
	int chaine = 0;
	int inv;

	while (s[chaine] != '\0')
	{
		chaine++;

		_putchar(s[chaine]);
		_putchar('\n');
	}

	for (inv = chaine - 1; inv >= '\0'; inv--)
	{
		_putchar(s[inv]);
	}
	_putchar('\n');
}
