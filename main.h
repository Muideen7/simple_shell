#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <limits.h>

extern char **environ;

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \n\a\t"

void _loop(char **env);
int _getchar(void);
char *get_line(void);
char *str_concate(char *s1, char *s2);
char *get_PATH_token(char *command);
char *_getline(void);
void prompt(void);
char **split-line(char *line);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
int myexit(char **input);
void env(char **env);
int print_env(char **input);
int built_in_check(char *s, char **input);
int execute(char *combine, char **input);
char *path_concate(char *directory, char *argument);
char *get_env(char **env);
char **dir_only(char **env);
char *check_path(char **directory, char *input);

#endif
