#include <stdio.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
int main(void)
{
	int n,i;
	for (n = 0; n <= '9'; n++)
	{
		for (i = n + 1; i <= '9'; i++)
		{
			putchar(n);
			putchar(i);
			if(n != '8' || i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
