#include "auth.h"

/**
 *print_usage -check and handle error of passed arguments.
 *@passed: pointer of array of char act as
 *passed arguments.
 *Return: 0 if success.
 */
int print_usage(char *passed[])
{
	int len = 0;

	len = str_length(passed);
	if (len == 1)
	{
		fprintf(stderr, "Error: you Can't pass a NULL value \n");
		return (EXIT_FAILURE);
	}
	else if (len == 2)
	{
		fprintf(stderr, "Error: you Can't pass username only ");
	}
	else if (len > 3)
	{
		fprintf(stderr, "Error: you Can't pass more than 2 parameters ");
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

/**
 *print_username_err - handle error of username.
 *@passed_user: username pointer
 *Return: 1 if it called.
 */
int print_username_err(char *passed_user)
{
	fprintf(stderr, "%s the username you entered doesn't meet reqirements as %d min length %d max length\n",
			passed_user, MIN_USERNAME_LENGTH, MAX_USERNAME_LENGTH);
	return (EXIT_FAILURE);
}

/**
 *print_password_err - handle error of username.
 *@password: password pointer
 *Return: 1 if it called.
 */
int print_password_err(char *password)
{
	fprintf(stderr, "the password you entered doesn't meet reqirements as %d min length %d max length\n",
			MIN_PASSWORD_LENGTH, MAX_PASSWORD_LENGTH);
	printf("you entered a password length = %ld\n", strlen(password));
	return (EXIT_FAILURE);
}
