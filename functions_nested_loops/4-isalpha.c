#include "main.h"

/**
 * _isalpha - Entry point
 * @c : variable c
 * Return: 1 (Success); Return: 0 (fail)
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
