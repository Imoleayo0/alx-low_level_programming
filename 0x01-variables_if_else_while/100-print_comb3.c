#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int b, c;

	for (b = 48; b < 57; b++)
	{
		for (c = 49; c < 58; c++)
		{
			if (c > b)
			{
				putchar(b);
				putchar(c);
				if (b != 57 || c != 58)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
