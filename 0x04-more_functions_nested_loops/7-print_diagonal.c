#include "main.h"

/**
 * print_diagonal - draw a diagona line
 * @num: number of times \ is printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int num)
{
	int line, line2;

	line = 1;

	while (line <= num)
	{
		if (num <= 0)
		{
			_putchar('\n');
		}
		else
		{
			line2 = line;

			while (line2 > 0)
			{
				_putchar(' ');
				line2--;
			}
			_putchar('\\');
			_putchar('\n');
		}

		line++;
	}
	 _putchar('\n');
}
