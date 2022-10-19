#include "main.h"

/**
  * _isalpha - check if character is lowercase or
  * uppercase
  * @c:the char to be checked
  *
  * Return: 1 if char is lowercase or uppercase, 0 if otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);

}
