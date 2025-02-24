#include "main.h"

/**
 * _isdigit - Entry point
 * @c: variable c
 * Return: 1 (Success); Return: 0 (fail)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
