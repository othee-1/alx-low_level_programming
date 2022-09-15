#include "main.h"

/**
 * _isupper - function that checks for uppercase characters
 * 
 * Return: 1 else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	} else
	{
		return (0);
	}	
}
