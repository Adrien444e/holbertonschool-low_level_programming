#include "main.h"

/**
 * _isupper - Entry point
 * @c: variable c
 * Return: 1 (Success); Return: 0 (Fail)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
