#include <main.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[] = "_putchar\n";

        write(1, &c, 9);
	return (0);
}
