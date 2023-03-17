#include <stdio.h>

/**
 * main - using putchar to print alphabets
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 122 ; i >= 97 ; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);

}
