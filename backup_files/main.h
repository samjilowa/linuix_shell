// main.h

#ifndef MAIN_H
#define MAIN_H

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

#endif
