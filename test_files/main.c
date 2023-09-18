#include <stdio.h>
#include<stdlib.h>
#include "main.h"

/* Custom string comparison function */
int customStrcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	
	if (*s1 == *s2){
	
		return 0; /* Strings are equal */
	} else if (*s1 < *s2){
		return -1; // s1 is less than s2
	} else {
		return 1; // s1 is greater than s2
	}
}

int main() {
    char* input;
    char** args;
    int status = 0; /* initialize status to 0 */

    while (1) {
        printPrompt();
        input = readInput();
        if (input == NULL) {
            printf("\n");
            break;
        }

        args = parseInput(input);

        /* Use custom string comparison */
        if (customStrcmp(args[0], "exit") == 0) {
            /* Return -1 to signal that the shell should exit */
            status = -1;
        } else {
		status = executeCommand(args);
	}

        free(input);
        freeMemory(args);

	/* checks for condition to exit the shell */
	
	if (status == -1)
	{
		exit_builtin(0); /* exit with status 0 */
	}
	else if (status == 1)
	{
		exit_builtin(1); /* exits with status 1 */
	}
    }

    return 0;
}
