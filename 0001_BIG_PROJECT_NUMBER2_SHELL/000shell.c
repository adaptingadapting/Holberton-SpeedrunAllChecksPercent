#include "main.h"

/**
 * main - command line interpreter
 */

int main(void)
{
	char *line = NULL;
	size_t len;
	list_t *Tline = NULL;
	ssize_t estatus = 0;
	size_t ct = 0;
	ssize_t *e_status = &estatus;
	size_t *count = &ct;

	for (;;)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("gcshell$ ");
		if (getline(&line, &len, stdin) == -1)
		{
			free(line);
			exit (*e_status);
		}
		if (!(_builtins(line, &Tline, e_status)))
			ct++;
		else
		{
			_split(&Tline, line, DELIMS);
			_execute(&Tline, e_status, count);
		}
	}
	return ((int)*e_status);
}
