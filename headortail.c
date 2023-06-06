// this rendetion does not promp the user and is esentially just a random number generator
// however the code will also state if this number is even or odd, thus making it possible to create heads or tails
#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
    srand(time(0));
    int i = (rand());
    if (i % 2 == 0){
        printf("Tails\n");
        }
    else if (i % 2 != 0){
        printf("Heads\n");
        }
}