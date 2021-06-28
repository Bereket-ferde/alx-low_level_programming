#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{   
    int i, j; 
    int RandomNumber; 
    char letter[0]; 
    char word[8];
    char testword[4] = "test";

    // generate random word 

    for (j = 3; j < 10; j++) {
        RandomNumber = rand() % 26;
        printf("%d", RandomNumber); 
        word[j] = 'a' + RandomNumber; 
        printf("Word: %s", word[j]); 
    }

    return 0;
}
