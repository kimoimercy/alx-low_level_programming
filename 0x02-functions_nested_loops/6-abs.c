#include "main.h"
/**
 * _abs - computes absolute value of a number
 * @n: integer input
 * Return:1 if greater than 0,0 if zero and -1 if less than zero
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
