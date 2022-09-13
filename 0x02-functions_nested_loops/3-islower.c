#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return:0 for uppercase, 1 for lower case
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
