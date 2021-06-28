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
 int i;
srand(time(0));

  for(i = 0; i<4; i++)
      printf("%i\n", num);
return (0);
}
