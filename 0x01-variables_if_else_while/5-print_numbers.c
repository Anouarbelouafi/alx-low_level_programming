#include <stdio.h>

/**
 * main - using putchar to print alphabets
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		printf("%d", i);
	}

	putchar(10);
	return (0);

}
