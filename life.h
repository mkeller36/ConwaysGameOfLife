#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#ifdef RAND_MAX
    #undef RAND_MAX
#endif
#define RAND_MAX 100 

void errorHandleingScanf(uint8_t result_errorHandling);

typedef struct{
    char prevVal;
    char currVal;
}civilization;

uint8_t result; 
int width;
char setDimentionNow;
int numPop = 0, generation = 1;