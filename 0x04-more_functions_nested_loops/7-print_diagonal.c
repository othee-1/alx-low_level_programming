#include "main.h"

/**
 * print_diagonal - draw a diagona line
 * @num: number of times \ is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int num)
{
int i;

	for (i = 0; i < num; i++)
	{
		int a;

		for (a = 0; a < i; a++)
			_putchar(32);
		if (a == i)
		{
			_putchar(92);
			_putchar('\n');
		}
	}	
}
