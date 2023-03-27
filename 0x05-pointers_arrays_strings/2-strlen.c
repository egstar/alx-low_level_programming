#include"main.h"
/**
	* strlen.c - Function description
	*
	* @s: Parameter description
	*
	* Return: length of string
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
