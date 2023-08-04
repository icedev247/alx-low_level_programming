#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes to stdout.
 * @c: character to be printed.
 * Rteurn: 1, on success, -1 on error,
 * and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
