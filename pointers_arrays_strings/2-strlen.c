#include "main.h"

/**
 * _strlen - Check the code
 *
 * @s: variable s
 * Return: num (Success)
 */

int _strlen(char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		num++;
	}
	return (num);
}
