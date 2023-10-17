#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar\n";

	return (write(1, &c, 9));
}
