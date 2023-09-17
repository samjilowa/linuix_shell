// read_input.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_LENGTH 1024

char* readInput() {
    char* input = (char*)malloc(MAX_INPUT_LENGTH * sizeof(char));
    if (!input) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL) {
        free(input);
        return NULL;
    }

    return input;
}
