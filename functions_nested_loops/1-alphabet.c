#include "main.h"
#include <unistd.h>
/**
* print_alphabet - Entry point
*
* Return: Always 0 (Success)
* 
*/

int print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";

	write(1, &c, 27);
	return (0);
}
