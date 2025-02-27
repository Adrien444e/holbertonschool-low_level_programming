#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry point.
 * @s: variable s
 *
 */

void print_rev(char *s)
{
	int chaine;

	for (chaine = 0; s[chaine] != '\0'; chaine--)
	{
		_putchar(s[chaine]);
	}
}
