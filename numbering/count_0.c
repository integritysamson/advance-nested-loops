#include <stdio.h>
/**
 * Purpose of this code is to count 1-10 in seven lines
 * main - This is the entry point
 * return - Always return o simplifyb success code
 */
int main(void)
{
int a, b;
	for (a = 1; a <= 7; a++)
	{
		for (b = 1; b <= 10; b++)
		{
			printf("%d ", b);
		}
		printf("\n");
	}
	return (0);
}
