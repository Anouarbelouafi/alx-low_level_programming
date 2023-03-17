#include <stdio.h>

/**
 * main -Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int y;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (y = 48 ; y <= 57 ; y++ )
		{
			putchar(i);
			puthcar(y);
			if (i > 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
