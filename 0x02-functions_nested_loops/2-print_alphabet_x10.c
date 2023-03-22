#include"main.h"
/**
	* print_alphabet_x10 - Function description
	*
	*/
void print_alphabet_x10(void)
{
	char s = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
	}
}
