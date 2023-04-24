#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int main(void)
{
  const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
  ssize_t len = 0;

  while (str[len])
    len++;

  /* Write the string to the standard error */
  write(2, str, len);

  /* Return 1 to indicate an error occurred */
  return (1);
}
