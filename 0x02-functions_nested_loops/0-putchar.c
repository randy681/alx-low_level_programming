#include <stdio.h>
#include <stdlib.h>

/**
 *  main - this is my code
 *
 *  Return: Return 0
 */

int main(void)
{
	char c[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
