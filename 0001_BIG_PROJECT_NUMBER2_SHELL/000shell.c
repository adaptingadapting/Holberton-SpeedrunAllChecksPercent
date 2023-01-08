#include "main.h"

/**
 * main - command line interpreter
 */

int main(void)
{
	char *line = NULL;
	size_t len;
	list_t *Tline = NULL;
	ssize_t e_status = 0;

	for (;;)
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("gcshell$ ");
		if (getline(&line, &len, stdin) == -1)
		{
			free(line);
			return (0);
		}
		_split(&Tline, line, DELIMS);
		_execute(&Tline);
	}
}
