#include <stdio.h>
/**
  * main-program entry point.
  * Return:0 success, non zero error.
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('ls\n');
	return (0);

}
