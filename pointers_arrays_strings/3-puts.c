#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: variable str
 */

void _puts(char *str)
{
	int chaine;

	for (chaine = 0; str[chaine] != '\0'; chaine++)
	{
		_putchar(str[chaine]);
	}
	_putchar('\n');
}
