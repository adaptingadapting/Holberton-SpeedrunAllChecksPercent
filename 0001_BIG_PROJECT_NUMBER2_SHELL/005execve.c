#include "main.h"

/**
 * _execute2 - executes with execve
 * @array: array derived from tje linked list
 */

ssize_t _execute2(char **array, size_t *count)
{
	int status;
	pid_t pid;
	ssize_t exit_status;

	pid = fork();
	if (pid == -1)
		exit(1);
	else if (pid > 0)
	{
		wait(&status);
		exit_status = WEXITSTATUS(status);
	}
	else
		if (execve(array[0], array, environ) == -1)
			exit(2);
	return (exit_status);
}
