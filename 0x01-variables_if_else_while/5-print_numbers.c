#include <stdio.h>

/**
  * main - entry point
  * Return: 0 error, non zero if error
  */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
