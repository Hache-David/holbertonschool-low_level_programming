#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _putchar(void)
{
        char c[] = "_putchar\n";

        write(1, &c, 9);
        return (0);
}


int print_alphabet(void)
{
        char c[] = "abcdefghijklmnopqrstuvwxyz"

        write(1, &c, 26);
        return (0);
}

