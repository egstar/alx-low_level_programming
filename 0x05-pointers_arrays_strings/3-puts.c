#include"main.h"
/**
	* _puts - Function description
	*
	*
	* @str: Parameter description
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

