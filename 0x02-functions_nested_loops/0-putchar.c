#include <stdio.h>
#include <main.h>
/**
	* main - Function description
	*
	* Return: (0) always success
	*/
 int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i<9; i++)
	{
		putchar(c[i]);
		if (c[i] == '\0')
		{
			putchar('\n');
		}
	}

	return (0);
}
