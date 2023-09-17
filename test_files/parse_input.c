// parse_input.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARGS 64
#define MAX_ARG_LENGTH 64

char** parseInput(char* input) {
    char** args = (char**)malloc(MAX_ARGS * sizeof(char*));
    if (!args) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    char* arg = strtok(input, " \t\n");
    int argIndex = 0;
    while (arg != NULL) {
        args[argIndex] = (char*)malloc(MAX_ARG_LENGTH * sizeof(char));
        if (!args[argIndex]) {
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }
        strcpy(args[argIndex], arg);
        argIndex++;
        arg = strtok(NULL, " \t\n");
    }
    args[argIndex] = NULL;

    return args;
}
