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

char num = rand();
srand(time(0));

printf("%i\n", num);
return (0);
}
