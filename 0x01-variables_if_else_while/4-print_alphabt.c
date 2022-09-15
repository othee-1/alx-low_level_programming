#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 successful
 *
 */

int main(void)
{
	char cnt;

	for (cnt = 'a'; cnt <= 'z'; cnt++)
	{
		if ((cnt != 'q') && (cnt != 'e'))
		{
			putchar(cnt);
		}
	}
	putchar('\n');

	return (0);
}
