#include "main.h"

/**
 * print_rev - Entry point.
 * @s: variable s
 * Return: chaine (Success)
 */

void print_rev(char *s)
{
	int chaine = 0;
	int inv;

	while (s[chaine] != '\0')
	{
		chaine++;
	}

	for (inv = chaine - 1; inv >= '\0'; inv--)
	{
		_putchar(s[inv]);
	}
	_putchar('\n');
}
