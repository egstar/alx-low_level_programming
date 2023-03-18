#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n;

	while(n < 10)
	{
		putchar(n + '0');
		putchar('\,');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
