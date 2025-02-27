#include "main.h"

/**
 * puts2 - Entry point
 * @str: variable str
 */

void puts2(char *str)
{
	int doubl;

	for (doubl = 0; str[doubl] != '\0'; doubl += 2)
	{
		_putchar(str[doubl]);
	}
	_putchar('\n');
}
