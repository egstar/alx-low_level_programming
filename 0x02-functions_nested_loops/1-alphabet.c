#include"main.h"
/**
	* print_alphabet - Function description
	*
	* Return: (0) always success
	*/
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
