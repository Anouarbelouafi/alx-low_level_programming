#include <stdio.h>

/**
 * main - Patience, persistence and perspiration
 * make an unbeatable combination for success
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar(10);
	return (0);
}
