#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int numbers;
	char letter;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((numbers % 10) + '0');
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar ('\n');

	return (0);
}
