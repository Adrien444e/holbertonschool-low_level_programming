#include "main.h"

/**
* more_numbers - Entry point
* Return: None
*/

void more_numbers(void)
{
	int num, a;

	for (num = 0; num < 10; num++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
