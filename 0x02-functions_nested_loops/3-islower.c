#include "main.h"
/**
 * main - returns 1 if lowercase and 0 otherwise
 * Return:0 for uppercase, 1 for lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <='z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
