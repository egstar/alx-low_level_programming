#include"main.h"
/**
	* _strcat - Function description
	*
	* @src: Parameter description
	* @dest: Parameter description
	* Return: Pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while(dest[i])
	{
		i++;
	}
	for(j = 0; src[j] ; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
