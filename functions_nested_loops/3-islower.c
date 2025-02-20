#include "main.h"
#include <stdlib.h>
/**
 * _islower - Entry point
 * @c : variable c
 * Return: 1 (Success); Return: 0 (fail)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
