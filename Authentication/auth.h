
#ifndef AUTH_H_
#define AUTH_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_USERNAME_LENGTH 12
#define MIN_USERNAME_LENGTH 3
#define MAX_PASSWORD_LENGTH 64
#define MIN_PASSWORD_LENGTH 8
#define MAX_ARGS 3
typedef struct data_s
{
	char *username;
	char *password;
} data_t;
int print_usage(char *passed[]);
int str_length(char *passed[]);
int open_file(char *data[]);
char *_strcpy(char *dest, char *src);
int check_status(char *username, char *password);
int check_username(char *username);
int check_password(char *password);
int print_username_err(char *passed_user);
int print_password_err(void);
#endif /* AUTH_H_ */
