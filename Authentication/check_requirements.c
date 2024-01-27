#include "auth.h"

/**
 *check_status -check requirements for username
 *and password.
 *@username: pointer to username.
 *@password: pointer to password.
 *Return: 0 if success.
 */
int check_status(char *username, char *password)
{
	if (check_username(username) == EXIT_SUCCESS &&
			check_password(password) == EXIT_SUCCESS)
	{
		return (EXIT_SUCCESS);
	}

	return (EXIT_FAILURE);
}

/**
 *check_username -check length of username.
 *@username: pointer to username .
 *Return: 0 if success.
 */
int check_username(char *username)
{
	int length = 0;

	length = strlen(username);
	if (length > MAX_USERNAME_LENGTH || length < MIN_USERNAME_LENGTH)
	{
		print_username_err(username);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

/**
 *check_password -check length of username.
 *@password: pointer to password .
 *Return: 0 if success.
 */
int check_password(char *password)
{
	int length = 0;

	length = strlen(password);
	if (length > MAX_PASSWORD_LENGTH || length < MIN_PASSWORD_LENGTH)
	{
		print_password_err(password);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
