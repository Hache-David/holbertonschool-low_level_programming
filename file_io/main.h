#ifndef __IO_FILE__
#define __IO_FILE__
#include <stdarg.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
