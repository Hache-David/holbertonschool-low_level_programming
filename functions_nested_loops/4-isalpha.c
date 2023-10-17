#include "main.h"
#include <unistd.h>
/**
* _isalpha - Entry point.
*
* @c : argument int received by the function.
*
* Return: Always 0.
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
