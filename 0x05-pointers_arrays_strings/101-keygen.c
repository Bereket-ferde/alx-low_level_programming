#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{   
    int j; 
    int RandomNumber; 
    char word[8];

    /* generate random word */ 

    for (j = 3; j < 10; j++) {
        RandomNumber = rand() % 26;
        printf("%d", RandomNumber); 
        word[j] = 'a' + RandomNumber; 
    }

    return 0;
}
