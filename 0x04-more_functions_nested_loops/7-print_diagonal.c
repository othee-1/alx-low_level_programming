#include <stdio.h>

/**
 * print_line - draw a diagona line
 * @num: number of times \ is printed
 * Description: Can only use _putchar to print
 */
void print_line(int num)
{
	int line, line2;

	line = 1;

	while (line <= num)
	{
		if (num <= 0)
		{
			putchar('\n');
		}
		else
		{
			line2 = line;

			while (line2 > 0)
			{
				putchar(' ');
				line2--;
			}
			putchar('\\');
			putchar('\n');
		}

		line++;
	}
	putchar('\n');
}
