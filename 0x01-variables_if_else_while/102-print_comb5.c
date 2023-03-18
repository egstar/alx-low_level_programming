#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n, i;

	for (n = 0; n < 100; n++)
	{
		for (i = n + 1; i < 100; n++)
		{
			putchar(n / 10 + '0');
			putchar(n + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i + '0');
			if (n != 98 || i != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
