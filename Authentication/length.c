#include "auth.h"

/**
 *str_length -calculate length of passed arguments array
 *from CL.
 *@passed: pointer of array of char act as
 *passed arguments.
 *Return: number of arguments.
 */
int str_length(char *passed[])
{
	int counter = 0;

	while (passed[counter] != NULL)
	{
		counter++;
	}

	return (counter);
}
