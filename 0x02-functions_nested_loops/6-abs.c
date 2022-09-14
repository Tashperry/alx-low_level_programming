#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
