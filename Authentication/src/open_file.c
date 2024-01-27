#include "auth.h"
/**
 *open_file -handle file processing
 *@data: pointer of array of char act as
 *passed arguments.
 *Return: 0 if success.
 */
int open_file(char *data[])
{
	FILE *filename;
	data_t *ptr = NULL;
	int index = 1;
	int element = 1;

	/*Check if file exists or not if not then create it */
	filename = fopen("users.txt", "a");
	if (filename == NULL)
	{
		fprintf(stderr, "Error: file doesn't exist or can't access it \n");
		return (EXIT_FAILURE);
	}
	ptr = malloc(sizeof(data_t));
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		return (EXIT_FAILURE);
	}
	ptr->username = malloc(sizeof(char) * MAX_USERNAME_LENGTH);
	ptr->password = malloc(sizeof(char) * MAX_PASSWORD_LENGTH);
	if (ptr->username == NULL || ptr->password == NULL)
	{
		fprintf(stderr, "Error: memory allocation faild \n");
		free(ptr->username);
		free(ptr->password);
		return (EXIT_FAILURE);
	}
	_strcpy(ptr->username, data[element]);
	_strcpy(ptr->password, data[element + 1]);
	if (check_status(ptr->username, ptr->password) == EXIT_SUCCESS)
	{
		while (data[index] != NULL)
		{
			if (index == 1)
				fprintf(filename, " username is %s", ptr->username);
			else
				fprintf(filename, " password is %s", ptr->password);
			fputs("\n", filename);
			index++;
		}
	}
	free(ptr->username);
	free(ptr->password);
	free(ptr);
	fclose(filename);
	return (EXIT_SUCCESS);
}
