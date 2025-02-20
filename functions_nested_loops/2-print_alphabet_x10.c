#include "main.h"

/**
* print_alphabet_x10 - Entry point
*/

void print_alphabet_x10(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
