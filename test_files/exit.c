#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * exit_builtin - Implement the exit built-in command.
 *
 * @status: the exit status code.
 */
void exit_builtin(int status)
{
	fflush(stdout); /*this flushes any pending output */
	exit(status); /* use exit to terminate the process */
}
