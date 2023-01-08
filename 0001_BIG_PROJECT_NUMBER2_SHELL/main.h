#ifndef MAIN_H
#define MAIN_H

#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define DELIMS  " \n\t"
#define DELIMS2 " =\n\t:"
#define DELIMS3 " =\n\t"

extern char **environ;

/**
 * struct list_s - list for tokens return from strtok
 * @string: current token
 * @next: next node in the linked list
 */

typedef struct list_s {
	char *string;
	struct list_s *next;
}	list_t;

size_t list_len(const list_t *h);
char *_getenv(char *variable);
int delete_node(list_t **list, size_t index);
list_t *add_node_end(list_t **list, char *string);
void _split(list_t **list, char *string, char *delims);
size_t _execute(list_t **list);
size_t _builtins(list_t **list);
void free_list(list_t *head);
char *path_concat(char *input);
size_t _execute2(char **array);

#endif
