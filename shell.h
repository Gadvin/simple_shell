#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void environmentVar(void);
void gad_prompt(void);
void g_print(char *message);
void r_command(char *command, size_t size);
void exe_command(const char *command);


#endif
