#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _purtchar(char c)
{
	return (write(1, &c, 1));
}
