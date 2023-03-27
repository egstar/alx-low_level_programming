#include"main.h"
/**
	* 3-puts.c - Function description
	*
	*
	* @: Parameter description
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

