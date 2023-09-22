#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>


char **s_data(char *input, char **argv);
char *_concate(char *end, const char *str);
char *_prompt(char **argv);
char *display_env(char **env, char *cmd);
int _cp(char *end, char *str);
int _notfound(char **cmd, char **env);
int _nv(char *input);
int _strcom(char *str1, char *str2, size_t sz);
int _strlen(char *str);
int prompt(int argc, char **argv, char **env);
int show_path(char **value, char **env);
void _show(int position, char **argv, char *msg);
void _showerror(int position, char **argv, char *cmd);
void exit_cmd(char **cmd);
void free_array(char **arr);
void r_cmd(char **value, char **argv, char **env);
void show_env(char **env);



#endif
