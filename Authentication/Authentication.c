/*
* ============================================================================
* Name        : Authentication.c
* Author      : Mr_Wolf0
* Version     :
* Copyright   : MIT
* Description : Hello World in C, Ansi-style
* ============================================================================
 */
#include "auth.h"

int main(int args, char *argv[])
{
	/*check number of arguments */
	if (args != MAX_ARGS)
	{
		print_usage(argv);
		return (EXIT_FAILURE);
	}

	open_file(argv);

	return (EXIT_SUCCESS);
}
