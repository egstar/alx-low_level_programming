#include <stdio.h>
/**
	* main function
	* Printing each variable size
	* Return (0)
	* Print variables size for 32bit x 64bit:
	*	char
	*	int
	*	long int
	*	long long int
	*	float
	*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
