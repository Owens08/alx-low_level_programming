#include <stdio.h>
#include "main.h"
/**
 * _islower - function name
 * @c : variable
 *
 * Return: int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
