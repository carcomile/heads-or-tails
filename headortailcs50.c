// this rendetion of heads or tails prompts the user to call if it willbe heads or tails.
// it will also use functions from the harvard cs50 library, go to cs50.dev to run this code.
#include <cs50.h>
#define _DEFAULT_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
    srand(time(0));
    int i = (rand());
    char c = get_char("Heads or Tails (h or t): ");
    if (c == 't' || c == 'h'){
        if (i % 2 == 0 && c == 't'){
            printf("Tails, you win\n");
        }
        else if (i % 2 == 0 && c == 'h'){
            printf("Heads, you lose\n");
        }
        else if (i % 2 != 0 && c == 'h'){
            printf("Heads, you win\n");
        }
        else{
            printf("Tails, you lose\n");
        }
    }
    else{
        printf("Please enter h (heads) or t (tails)\n");
    }
}