// main.h

#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h> // Include for pid_t

// Function to print the shell prompt
void printPrompt();

// Function to read the user input
char* readInput();

// Function to parse the user input
char** parseInput(char* input);

// Function to execute a command
int executeCommand(char** args);

// Function to free memory
void freeMemory(char** args);

// Function to print unique process identifier
void printProductAndPid(void);

// Function to get Parent PID
pid_t get_parent_process_id(void);
void print_sum_and_ppid(int x, int y);

// Function declaration for exit_builtin
void exit_builtin(int status);

#endif
