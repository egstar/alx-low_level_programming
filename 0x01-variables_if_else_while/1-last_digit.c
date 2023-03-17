#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
	* main - Function description
	*
	* Return: always (0) success
	*/
int main(void)
{
	int n;
	int lastn;
	char res[30] = "";
	char res1[] = "and is greater than 5";
 	char res2[] = "and is less than 6 and not 0";
	char res3[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = abs(n) % 10;
	if (lastn > 5)
	{
		strncat(res, res1, -1);
	}
	else if (lastn == 0)
	{
		strncat(res, res3, -1);
	}
	else
	{
		strncat(res, res2, -1);
	}
	printf("Last digit of %d is %d %s\n", n , lastn, res);

	return (0);
}
