#ifndef PROTOSHELL_H
#define PROTOSHELL_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

void myoutput(const char *type);
void inducer(void);
void implementor(const char *input);
void receptor(char *arg, size_t vol);
void inplementor1(const char *input);
int main(int argc, char *argv[]);

#endif
