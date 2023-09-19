#include "main.h"
/**
 * char_print - print char
 *
 * @args: argument.
 *
 * Return:  1 if the a char passed
 */

int char_print(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
