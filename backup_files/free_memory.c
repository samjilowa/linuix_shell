// free_memory.c

#include "main.h"
#include <stdlib.h>

void freeMemory(char** args) {
    for (int i = 0; args[i] != NULL; i++) {
        free(args[i]);
    }
    free(args);
}
