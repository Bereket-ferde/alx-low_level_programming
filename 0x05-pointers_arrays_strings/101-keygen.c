#include "holberton.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
*
*/
int main(void)
{

srand(time(0));

for(int i = 0; i<4; i++)
    printf("%i\n", rand());
return (0);
}
