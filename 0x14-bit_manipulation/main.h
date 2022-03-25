#ifndef _MC_
#define _MC_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>



int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif