#include <stdio.h>

/**
 * main - using putchar to print alphabets
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);

}
