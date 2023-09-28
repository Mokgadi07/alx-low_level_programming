#include <unistd.h>

/**
 * This is my _putchar.c
 */

int _putchar(char c)
{
	return write(STOUD_FILENO, &c, 1);
}
