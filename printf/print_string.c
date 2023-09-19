#include "main.h"
/**
 * string_print - print string.
 *
 * @args: argument.
 *
 * Return: character count.
 */
int string_print(va_list args)
{
	int i;
	int number_of_letters = 0;
	char *str = va_arg(args, char *);
/*if there is no content passed return null*/
	if (!str)
		str = "(null)";
/*if  the string intialized but still empty  return -1*/
	if (str[0] == '\0')
		return (-1);
/*iterate the string*/
	for (i = 0; str[i] != '\0'; i++)
		number_of_letters += _putchar(str[i]);

	return (number_of_letters);
}
