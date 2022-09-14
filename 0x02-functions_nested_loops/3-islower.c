#include "main.h"
/**
 * _islower - print lower case
 *
 * @c: variable
 * 
 * Return: returns 1 or 0 depending on the condition
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
