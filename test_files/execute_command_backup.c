// execute_command.c

#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int executeCommand(char** args) {
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return -1;
    } else if (pid == 0) {
        // Child process
        if (execvp(args[0], args) == -1) {
            perror("Execution error");
            return -1;
        }
    } else {
        // Parent process
        int status;
        waitpid(pid, &status, 0);
    }

    return 0;
}
