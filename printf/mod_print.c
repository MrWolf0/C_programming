#include "main.h"
#include <unistd.h>

/**
 * mod_print - print %.
 *
 * @args: arguments.
 *
 * Return: 1 if we pass % to _printf
 */

int mod_print(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
