#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char numbers;

	for (numbers = 0; numbers <= 15; numbers++)
	{
		printf("%x", numbers);
	}

	putchar ('\n');

	return (0);
}
